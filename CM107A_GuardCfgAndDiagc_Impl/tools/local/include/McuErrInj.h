/* Contract file for CM107A */
#include "flxa_regs.h"
#include "lockstep_regs.h"
#include "intc_regs.h"
#include "dma_regs.h"
#include "tauj_regs.h"
#include "csih_regs.h"
#include "enca_regs.h"

#define MCUDIAGCERRINJ  STD_OFF

extern void ClrErrInjReg_Oper(void);
extern void ReadErrInjReg_Oper(uint32* ErrId);
extern uint32 McuDiagcTestVar1_G;

#if (MCUDIAGCERRINJ == STD_ON)

#define MCUERRINJ_NTC002DBIT03CASE01_CNT_U32					0x002D0801U
#define MCUERRINJ_NTC002DBIT03CASE02_CNT_U32					0x002D0802U
#define MCUERRINJ_NTC002DBIT03CASE03_CNT_U32					0x002D0803U
#define MCUERRINJ_NTC002DBIT03CASE04_CNT_U32					0x002D0804U
#define MCUERRINJ_NTC002DBIT03CASE05_CNT_U32					0x002D0805U
#define MCUERRINJ_NTC002DBIT03CASE06_CNT_U32					0x002D0806U

#define MCUERRINJ_NTC002DBIT01CASE01_CNT_U32					0x002D0201U
#define MCUERRINJ_NTC002DBIT01CASE02_CNT_U32					0x002D0202U
#define MCUERRINJ_NTC002DBIT05CASE01_CNT_U32					0x002D2001U
#define MCUERRINJ_NTC002DBIT05CASE02_CNT_U32					0x002D2002U
#define MCUERRINJ_NTC002DBIT05CASE03_CNT_U32					0x002D2003U
#define MCUERRINJ_NTC002DBIT05CASE04_CNT_U32					0x002D2004U
#define MCUERRINJ_NTC002DBIT05CASE05_CNT_U32					0x002D2005U
#define MCUERRINJ_NTC002DBIT05CASE06_CNT_U32					0x002D2006U

#define MCUERRINJ_NTC0022BIT01CASE01_CNT_U32					0x00220201U
#define MCUERRINJ_NTC0022BIT01CASE02_CNT_U32					0x00220202U
#define MCUERRINJ_NTC0022BIT01CASE03_CNT_U32					0x00220203U
#define MCUERRINJ_NTC0022BIT01CASE04_CNT_U32					0x00220204U
#define MCUERRINJ_NTC0022BIT01CASE05_CNT_U32					0x00220205U
#define MCUERRINJ_NTC0022BIT01CASE06_CNT_U32					0x00220206U

#define MCUERRINJ_NTC002DBIT04CASE01_CNT_U32					0x002D1001U
#define MCUERRINJ_NTC002DBIT04CASE02_CNT_U32					0x002D1002U

extern volatile uint32 McuDiagcTestAry_G[8U];
extern FUNC(void, CDD_GuardCfgAndDiagc_CODE)InjIpgRtErr(void);
extern FUNC(void, CDD_GuardCfgAndDiagc_CODE)InjRtPegErr(void);
#endif
