
/**********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name  : MfgSrvCfg.c.tt
* Module Description: Nexteer Manufacturing Services
* Project           : CBD
* Author            : Jared Julien
* Generator         : artt 2.0.2.0
* Generation Time   : 30.07.2018 19:59:51
***********************************************************************************************************************
* Version Control:
* %version:          23 %
* %derived_by:       tzyksv %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* -------   -------  --------  -----------------------------------------------------------------------------  ---------
* 11/04/15  1        JWJ       Initial Template Version                                                       EA4#
* 06/07/17  2        JWJ       Changed NULL to NULL_PTR to support OS update                                  EA4#11834
* 07/07/17  3        JWJ       Update type for non-trusted function table to new structure type               EA4#13539
**********************************************************************************************************************/



/************************************************ Include Statements *************************************************/
#include "Rte_CmnMfgSrv.h"
#include "CmnMfgSrv.h"
#include "MfgSrvCfg.h"
#include "CmnMfgSrvTyp.h"
#include "Os.h"


/******************************************** File Level Rule Deviations *********************************************/

/********************************************* Embedded Local Constants **********************************************/

/* Enabled services lookup/configuration */
CONST(MfgSrvTblRec, AUTOMATIC) CmnMfgSrv_MfgSrvTbl_Cnt_str[175u] =
{
/* A: Nexteer Session (NRC: 0x7F)
 * B: Security Access (NRC: 0x33)
 *                                            Checks
 *   Type   Id       Sub    ReqLen   ResLen    A   B    Appl   Handler */
	{0x22u, 0xF194u, 0xFFu, 0x0000u, 0x0010u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF194Rd},
	{0x22u, 0xF195u, 0xFFu, 0x0000u, 0x0010u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF195Rd},
	{0x22u, 0xF1F2u, 0xFFu, 0x0000u, 0x0005u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF1F2Rd},
	{0x22u, 0xF1F3u, 0xFFu, 0x0000u, 0x0005u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF1F3Rd},
	{0x22u, 0xF1F4u, 0xFFu, 0x0000u, 0x0005u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF1F4Rd},
	{0x22u, 0xF1F7u, 0xFFu, 0x0000u, 0x003Bu, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF1F7Rd},
	{0x22u, 0xF1F8u, 0xFFu, 0x0000u, 0x003Bu, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF1F8Rd},
	{0x22u, 0xF1F9u, 0xFFu, 0x0000u, 0x003Bu, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF1F9Rd},
	{0x22u, 0xF1FDu, 0xFFu, 0x0000u, 0x0009u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF1FDRd},
	{0x22u, 0xF1FEu, 0xFFu, 0x0000u, 0x0005u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF1FERd},
	{0x22u, 0xF1FFu, 0xFFu, 0x0000u, 0x0014u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF1FFRd},
	{0x22u, 0xFD00u, 0xFFu, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD00Rd},
	{0x22u, 0xFD01u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD01Rd},
	{0x22u, 0xFD02u, 0xFFu, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD02Rd},
	{0x2Eu, 0xFD02u, 0xFFu, 0x0001u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD02Wr},
	{0x22u, 0xFD03u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD03Rd},
	{0x2Eu, 0xFD03u, 0xFFu, 0x0004u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD03Wr},
	{0x22u, 0xFD05u, 0xFFu, 0x0000u, 0x0008u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD05Rd},
	{0x2Eu, 0xFD05u, 0xFFu, 0x0008u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD05Wr},
	{0x22u, 0xFD06u, 0xFFu, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD06Rd},
	{0x22u, 0xFD30u, 0xFFu, 0x0000u, 0x0014u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD30Rd},
	{0x2Eu, 0xFD30u, 0xFFu, 0x0014u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD30Wr},
	{0x22u, 0xFD31u, 0xFFu, 0x0000u, 0x0014u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD31Rd},
	{0x2Eu, 0xFD31u, 0xFFu, 0x0014u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD31Wr},
	{0x22u, 0xFD32u, 0xFFu, 0x0000u, 0x0014u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD32Rd},
	{0x2Eu, 0xFD32u, 0xFFu, 0x0014u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD32Wr},
	{0x22u, 0xFD38u, 0xFFu, 0x0000u, 0x0010u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD38Rd},
	{0x2Eu, 0xFD38u, 0xFFu, 0x0010u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD38Wr},
	{0x22u, 0xFD39u, 0xFFu, 0x0000u, 0x0010u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD39Rd},
	{0x2Eu, 0xFD39u, 0xFFu, 0x0010u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD39Wr},
	{0x22u, 0xFD3Au, 0xFFu, 0x0000u, 0x0010u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD3ARd},
	{0x2Eu, 0xFD3Au, 0xFFu, 0x0010u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD3AWr},
	{0x22u, 0xFD3Bu, 0xFFu, 0x0000u, 0x0010u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD3BRd},
	{0x2Eu, 0xFD3Bu, 0xFFu, 0x0010u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD3BWr},
	{0x22u, 0xFD3Cu, 0xFFu, 0x0000u, 0x0010u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD3CRd},
	{0x2Eu, 0xFD3Cu, 0xFFu, 0x0010u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD3CWr},
	{0x22u, 0xFD60u, 0xFFu, 0x0000u, 0x0064u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD60Rd},
	{0x22u, 0xFDB4u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDB4Rd},
	{0x2Eu, 0xFDB4u, 0xFFu, 0x0004u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDB4Wr},
	{0x22u, 0xFDB5u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDB5Rd},
	{0x2Eu, 0xFDB5u, 0xFFu, 0x0004u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDB5Wr},
	{0x22u, 0xFDB6u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDB6Rd},
	{0x2Eu, 0xFDB6u, 0xFFu, 0x0004u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDB6Wr},
	{0x22u, 0xFDB7u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDB7Rd},
	{0x2Eu, 0xFDB7u, 0xFFu, 0x0004u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDB7Wr},
	{0x22u, 0xFDBCu, 0xFFu, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDBCRd},
	{0x22u, 0xFDBDu, 0xFFu, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDBDRd},
	{0x22u, 0xFDBEu, 0xFFu, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDBERd},
	{0x22u, 0xFDBFu, 0xFFu, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDBFRd},
	{0x22u, 0xFDC0u, 0xFFu, 0x0000u, 0x0002u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDC0Rd},
	{0x2Eu, 0xFDC0u, 0xFFu, 0x0002u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDC0Wr},
	{0x22u, 0xFDD7u, 0xFFu, 0x0000u, 0x006Au, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDD7Rd},
	{0x2Eu, 0xFDD7u, 0xFFu, 0x006Au, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDD7Wr},
	{0x22u, 0xFDDFu, 0xFFu, 0x0000u, 0x006Au, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDDFRd},
	{0x2Eu, 0xFDDFu, 0xFFu, 0x006Au, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDDFWr},
	{0x22u, 0xFDF8u, 0xFFu, 0x0000u, 0x0008u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDF8Rd},
	{0x2Eu, 0xFDF8u, 0xFFu, 0x0008u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDF8Wr},
	{0x22u, 0xFE21u, 0xFFu, 0x0000u, 0x001Cu, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFE21Rd},
	{0x2Eu, 0xFE21u, 0xFFu, 0x001Cu, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFE21Wr},
	{0x22u, 0xFE81u, 0xFFu, 0x0000u, 0x000Du, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFE81Rd},
	{0x2Eu, 0xFE82u, 0xFFu, 0x0004u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFE82Wr},
	{0x2Eu, 0xFE83u, 0xFFu, 0x0004u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFE83Wr},
	{0x22u, 0xFE8Au, 0xFFu, 0x0000u, 0x0007u, {0u, 0u}, 0x07u, CmnMfgSrv_SrvFE8ARd},
	{0x2Eu, 0xFE8Au, 0xFFu, 0x0007u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFE8AWr},
	{0x22u, 0xFE8Bu, 0xFFu, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFE8BRd},
	{0x2Eu, 0xFE8Bu, 0xFFu, 0x0001u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFE8BWr},
	{0x22u, 0xFE8Cu, 0xFFu, 0x0000u, 0x00D4u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFE8CRd},
	{0x2Eu, 0xFE8Cu, 0xFFu, 0x00D4u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFE8CWr},
	{0x22u, 0xFE90u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFE90Rd},
	{0x2Eu, 0xFE90u, 0xFFu, 0x0004u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFE90Wr},
	{0x22u, 0xF201u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF201Rd},
	{0x22u, 0xF202u, 0xFFu, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF202Rd},
	{0x22u, 0xF203u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF203Rd},
	{0x22u, 0xF204u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF204Rd},
	{0x22u, 0xF205u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF205Rd},
	{0x22u, 0xF206u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF206Rd},
	{0x22u, 0xF207u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF207Rd},
	{0x22u, 0xF22Fu, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF22FRd},
	{0x22u, 0xF230u, 0xFFu, 0x0000u, 0x0002u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF230Rd},
	{0x22u, 0xF231u, 0xFFu, 0x0000u, 0x0002u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF231Rd},
	{0x22u, 0xF23Eu, 0xFFu, 0x0000u, 0x0002u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF23ERd},
	{0x22u, 0xF23Fu, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF23FRd},
	{0x22u, 0xFD40u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD40Rd},
	{0x2Fu, 0xFD40u, 0x00u, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD40CtrlRtn},
	{0x2Fu, 0xFD40u, 0x03u, 0x0004u, 0x0004u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD40CtrlAdj},
	{0x22u, 0xFD41u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD41Rd},
	{0x2Fu, 0xFD41u, 0x00u, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD41CtrlRtn},
	{0x2Fu, 0xFD41u, 0x03u, 0x0004u, 0x0004u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD41CtrlAdj},
	{0x22u, 0xFD42u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD42Rd},
	{0x2Fu, 0xFD42u, 0x00u, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD42CtrlRtn},
	{0x2Fu, 0xFD42u, 0x03u, 0x0004u, 0x0004u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD42CtrlAdj},
	{0x31u, 0xF100u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF100RoutineStrt},
	{0x31u, 0xF100u, 0x02u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF100RoutineStop},
	{0x31u, 0xF100u, 0x03u, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF100RoutineSts},
	{0x31u, 0xF101u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF101RoutineStrt},
	{0x31u, 0xF101u, 0x02u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF101RoutineStop},
	{0x31u, 0xF101u, 0x03u, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF101RoutineSts},
	{0x31u, 0xF110u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF110RoutineStrt},
	{0x31u, 0xF110u, 0x02u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF110RoutineStop},
	{0x31u, 0xF110u, 0x03u, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF110RoutineSts},
	{0x31u, 0xF111u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF111RoutineStrt},
	{0x31u, 0xF111u, 0x02u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF111RoutineStop},
	{0x31u, 0xF111u, 0x03u, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF111RoutineSts},
	{0x31u, 0xF112u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF112RoutineStrt},
	{0x31u, 0xF112u, 0x02u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF112RoutineStop},
	{0x31u, 0xF112u, 0x03u, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF112RoutineSts},
	{0x31u, 0xF113u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF113RoutineStrt},
	{0x31u, 0xF113u, 0x02u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF113RoutineStop},
	{0x31u, 0xF113u, 0x03u, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF113RoutineSts},
	{0x31u, 0xF114u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF114RoutineStrt},
	{0x31u, 0xF114u, 0x02u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF114RoutineStop},
	{0x31u, 0xF114u, 0x03u, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF114RoutineSts},
	{0x31u, 0xF115u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF115RoutineStrt},
	{0x31u, 0xF115u, 0x02u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF115RoutineStop},
	{0x31u, 0xF115u, 0x03u, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF115RoutineSts},
	{0x31u, 0xF116u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF116RoutineStrt},
	{0x31u, 0xF116u, 0x02u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF116RoutineStop},
	{0x31u, 0xF116u, 0x03u, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF116RoutineSts},
	{0x31u, 0xF117u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF117RoutineStrt},
	{0x31u, 0xF117u, 0x02u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF117RoutineStop},
	{0x31u, 0xF117u, 0x03u, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF117RoutineSts},
	{0x31u, 0xF118u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF118RoutineStrt},
	{0x31u, 0xF118u, 0x02u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF118RoutineStop},
	{0x31u, 0xF118u, 0x03u, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF118RoutineSts},
	{0x31u, 0xF119u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF119RoutineStrt},
	{0x31u, 0xF119u, 0x02u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF119RoutineStop},
	{0x31u, 0xF119u, 0x03u, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF119RoutineSts},
	{0x31u, 0xF11Au, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF11ARoutineStrt},
	{0x31u, 0xF11Au, 0x02u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF11ARoutineStop},
	{0x31u, 0xF11Au, 0x03u, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF11ARoutineSts},
	{0x31u, 0xF140u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF140RoutineStrt},
	{0x31u, 0xF140u, 0x02u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF140RoutineStop},
	{0x31u, 0xF140u, 0x03u, 0x0000u, 0x0008u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF140RoutineSts},
	{0x31u, 0xF141u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF141RoutineStrt},
	{0x31u, 0xF141u, 0x02u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF141RoutineStop},
	{0x31u, 0xF141u, 0x03u, 0x0000u, 0x0008u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF141RoutineSts},
	{0x31u, 0xF150u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF150RoutineStrt},
	{0x31u, 0xF150u, 0x02u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF150RoutineStop},
	{0x31u, 0xF150u, 0x03u, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF150RoutineSts},
	{0x31u, 0xF151u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF151RoutineStrt},
	{0x31u, 0xF151u, 0x02u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF151RoutineStop},
	{0x31u, 0xF151u, 0x03u, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF151RoutineSts},
	{0x31u, 0xFDF0u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDF0RoutineStrt},
	{0x31u, 0xFDF0u, 0x03u, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDF0RoutineSts},
	{0x31u, 0xFDF1u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDF1RoutineStrt},
	{0x31u, 0xFDF1u, 0x03u, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDF1RoutineSts},
	{0x31u, 0xFE20u, 0x01u, 0x0008u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFE20RoutineStrt},
	{0x31u, 0xFE20u, 0x02u, 0x0004u, 0x0000u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFE20RoutineStop},
	{0x31u, 0xF000u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF000RoutineStrt},
	{0x31u, 0xF001u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF001RoutineStrt},
	{0x31u, 0xF002u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF002RoutineStrt},
	{0x31u, 0xF200u, 0x01u, 0x0004u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF200RoutineStrt},
	{0x31u, 0xFD68u, 0x01u, 0x0002u, 0x0005u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD68RoutineStrt},
	{0x31u, 0xFD70u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD70RoutineStrt},
	{0x31u, 0xFD71u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD71RoutineStrt},
	{0x31u, 0xFDA4u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDA4RoutineStrt},
	{0x31u, 0xFDA5u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDA5RoutineStrt},
	{0x31u, 0xFDACu, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDACRoutineStrt},
	{0x31u, 0xFDADu, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDADRoutineStrt},
	{0x31u, 0xFDAEu, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDAERoutineStrt},
	{0x31u, 0xFDAFu, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDAFRoutineStrt},
	{0x31u, 0xFE80u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFE80RoutineStrt},
	{0x31u, 0xFE88u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFE88RoutineStrt},
	{0x31u, 0xFE89u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFE89RoutineStrt},
	{0x31u, 0xFEA1u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFEA1RoutineStrt},
	{0x22u, 0xFDF7u, 0xFFu, 0x0000u, 0x001Cu, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDF7Rd},
	{0x22u, 0xFD62u, 0xFFu, 0x0000u, 0x0100u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD62Rd},
	{0x22u, 0xFD63u, 0xFFu, 0x0000u, 0x0014u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD63Rd},
	{0x2Eu, 0xFDF6u, 0xFFu, 0x000Cu, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDF6Wr},
	{0x2Eu, 0xFDF7u, 0xFFu, 0x001Cu, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDF7Wr},
	{0x22u, 0xFDF6u, 0xFFu, 0x0000u, 0x000Cu, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDF6Rd},
	{0x2Eu, 0xFED0u, 0xFFu, 0x0001u, 0x0000u, {0u, 0u}, 0x0Au, ProgMfgSrv_SrvFED0Wr},
	{0x22u, 0xFED0u, 0xFFu, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, ProgMfgSrv_SrvFED0Rd},
	{0x22u, 0xFED1u, 0xFFu, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, ProgMfgSrv_SrvFED1Rd},
	{0x2Eu, 0xFED1u, 0xFFu, 0x0001u, 0x0000u, {0u, 0u}, 0x0Au, ProgMfgSrv_SrvFED1Wr},
};

CONST(NonTrustdFctApplIdxRec, AUTOMATIC) CmnMfgSrvCfg_NonTrustdFctPtrTbl[11U] = {
	{0xFFFFU, 0U}, /* Appl0 non-trusted function not used */
	{0xFFFFU, 0U}, /* Appl1 non-trusted function not used */
	{0xFFFFU, 0U}, /* Appl2 non-trusted function not used */
	{0xFFFFU, 0U}, /* Appl3 non-trusted function not used */
	{0xFFFFU, 0U}, /* Appl4 non-trusted function not used */
	{0xFFFFU, 0U}, /* Appl5 non-trusted function not used */
	{0xFFFFU, 0U}, /* Appl6 non-trusted function not used */
	{(uint16)NtWrapS_CmnMfgSrv_CallSvc7, (uint8)Appl7},
	{0xFFFFU, 0U}, /* Appl8 non-trusted function not used */
	{0xFFFFU, 0U}, /* Appl9 non-trusted function not used */
	{(uint16)NtWrapS_CmnMfgSrv_CallSvc10, (uint8)Appl10},
};


/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/

/*********************************************** Function Definitions ************************************************/
/**********************************************************************************************************************
*        Name:  NONTRUSTED_NtWrapS_CmnMfgSrv_CallSvc10
* Description:  Non-trusted function call for Application 10 write services
*      Inputs:  FunctionIndex - Non-trusted function index
*               FunctionParams - Pointer to parameter structure
*     Outputs:  None
* Usage Notes:  None
**********************************************************************************************************************/
    /* NEXTEER PATCH START
     * The following code was patched from the generated file until a solution is 
     * available for anomaly EA4#16688 AR - 30Mar18*/
FUNC(void, CDD_NxtrMfgSrv_CODE) NONTRUSTED_NtWrapS_CmnMfgSrv_CallSvc10(
		Os_NonTrustedFunctionIndexType FunctionIndex,
		Os_NonTrustedFunctionParameterRefType FunctionParams)
	/* NEXTEER PATCH END */
{
	/* Call the service function that was passed as a parameter in FunctionParams and pass it that data buffer that
	 * was passed as another parameter */
	CmnMfgSrvRetBuf_G = ((MfgSrvFuncRef)((NtMfgSrvRec*)FunctionParams)->SrvFct)(((NtMfgSrvRec*)FunctionParams)->DataBuf);
}


/**********************************************************************************************************************
*        Name:  NONTRUSTED_NtWrapS_CmnMfgSrv_CallSvc7
* Description:  Non-trusted function call for Application 7 write services
*      Inputs:  FunctionIndex - Non-trusted function index
*               FunctionParams - Pointer to parameter structure
*     Outputs:  None
* Usage Notes:  None
**********************************************************************************************************************/
    /* NEXTEER PATCH START
     * The following code was patched from the generated file until a solution is 
     * available for anomaly EA4#16688 AR - 30Mar18*/
FUNC(void, CDD_NxtrMfgSrv_CODE) NONTRUSTED_NtWrapS_CmnMfgSrv_CallSvc7(
		Os_NonTrustedFunctionIndexType FunctionIndex,
		Os_NonTrustedFunctionParameterRefType FunctionParams)
	/* NEXTEER PATCH END */
{
	/* Call the service function that was passed as a parameter in FunctionParams and pass it that data buffer that
	 * was passed as another parameter */
	CmnMfgSrvRetBuf_G = ((MfgSrvFuncRef)((NtMfgSrvRec*)FunctionParams)->SrvFct)(((NtMfgSrvRec*)FunctionParams)->DataBuf);
}



/* End of File: MfgSrvCfg.c */
