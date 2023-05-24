@Echo Off
setlocal

for %%* in (../.) do set SWC=%%~n*

for /D %%G in ("..\..\*_EPS_*") do set INTPJTDIR=%%G
echo Integration project relative path is: %INTPJTDIR%

echo Deleting Old Directory
rmdir %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\%SWC% /s /q
rmdir %INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\%SWC% /s /q
rmdir %INTPJTDIR%\tools\SIP\BSWMD\%SWC% /s /q
echo Copying New Directory
mkdir %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\%SWC%
mkdir %INTPJTDIR%\tools\SIP\BSWMD\%SWC%

:VariantSelection
echo.
echo Please Select Program Variant number to integrate:
echo.
echo 1 = BMW
echo 2 = Generic
echo.
set /p ProgramVariant= Variant Number (1-2)? 
if "%ProgramVariant%" == "1" (
echo Variant selected is BMW
goto CopyVariant_BMW )
if "%ProgramVariant%" == "2" (
echo Variant selected is Generic
goto CopyVariant_Generic )
goto WrongVariant

:CopyVariant_BMW
xcopy ..\autosar\BMW        %INTPJTDIR%\tools\SIP\BSWMD\%SWC% /s
goto CopyCommon

:CopyVariant_Generic
xcopy ..\autosar\Generic        %INTPJTDIR%\tools\SIP\BSWMD\%SWC% /s
goto CopyCommon

:CopyCommon
xcopy ..\autosar\WdgIf_bswmd.arxml					%INTPJTDIR%\tools\SIP\BSWMD\%SWC% /s
xcopy ..\tools\IntegrationCopy\Configurator			%INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\%SWC% /s
goto end

:WrongVariant
echo ATTENTION: Wrong variant selected. Existing files were deleted but no new file is copied.

:end

pause
endlocal
