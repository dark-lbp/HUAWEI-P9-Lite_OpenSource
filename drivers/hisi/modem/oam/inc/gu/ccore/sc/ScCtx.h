/******************************************************************************

                  ��Ȩ���� (C), 2001-2012, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : ScCtx.h
  �� �� ��   : ����
  ��    ��   : w00184875
  ��������   : 2012��04��19��
  ����޸�   :
  ��������   : ScCtx.c ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2012��04��19��
    ��    ��   : w00184875
    �޸�����   : �����ļ�

******************************************************************************/

#ifndef __SCCTX_H__
#define __SCCTX_H__

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include "ScCommCtx.h"
#include "ScComm.h"
#include "ScFactory.h"
#include "ScApSec.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 �궨��
*****************************************************************************/


/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/


/*****************************************************************************
  4 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  6 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  7 STRUCT����
*****************************************************************************/

/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/

/*****************************************************************************
 �� �� ��  : SC_CTX_InitFacGlobalVar
 ��������  : ��ʼ��SC���߲�����ȫ�ֱ���
 �������  : ��
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��04��19��
    ��    ��   : w00184875
    �޸�����   : �����ɺ���
*****************************************************************************/
extern VOS_VOID  SC_CTX_InitFacGlobalVar( VOS_VOID );

/*****************************************************************************
 �� �� ��  : SC_CTX_GetFacAuthStatus
 ��������  : ��ȡSC���߼�Ȩ״̬
 �������  : ��
 �������  : ��
 �� �� ֵ  : SC_AUTH_STATUS_ENUM_UINT8
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��04��19��
    ��    ��   : w00184875
    �޸�����   : �����ɺ���
*****************************************************************************/
extern SC_AUTH_STATUS_ENUM_UINT8  SC_CTX_GetFacAuthStatus( VOS_VOID );

/*****************************************************************************
 �� �� ��  : SC_CTX_GetFacAuthStatus
 ��������  : ����SC���߼�Ȩ״̬
 �������  : ��
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��04��19��
    ��    ��   : w00184875
    �޸�����   : �����ɺ���
*****************************************************************************/
extern VOS_VOID  SC_CTX_SetFacAuthStatus( SC_AUTH_STATUS_ENUM_UINT8 enScAuthStatus );

/*****************************************************************************
 �� �� ��  : SC_CTX_GetIdentifyStartFlg
 ��������  : ��ȡ������߼�Ȩ���̱�־
 �������  : ��
 �������  : ��
 �� �� ֵ  : VOS_UINT8
                VOS_TRUE:   �ѷ�����߼�Ȩ
                VOS_FALSE:  δ������߼�Ȩ
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��04��19��
    ��    ��   : w00184875
    �޸�����   : �����ɺ���
*****************************************************************************/
VOS_UINT8  SC_CTX_GetIdentifyStartFlg( VOS_VOID );

/*****************************************************************************
 �� �� ��  : SC_CTX_SetIdentifyStartFlg
 ��������  : ���÷�����߼�Ȩ���̱�־
 �������  : VOS_UINT8 ucIdentifyStartFlg
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��04��19��
    ��    ��   : w00184875
    �޸�����   : �����ɺ���
*****************************************************************************/
VOS_VOID  SC_CTX_SetIdentifyStartFlg( VOS_UINT8 ucIdentifyStartFlg );

/*****************************************************************************
 �� �� ��  : SC_CTX_GetFacRandDataAddr
 ��������  : ��ȡSC���߼�Ȩʱ������ĵ�ַ
 �������  : ��
 �������  : ��
 �� �� ֵ  : SC���߲��߼�Ȩʱ������ĵ�ַ
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��04��19��
    ��    ��   : w00184875
    �޸�����   : �����ɺ���
*****************************************************************************/
extern VOS_UINT8*  SC_CTX_GetFacRandDataAddr( VOS_VOID );

/*****************************************************************************
 �� �� ��  : SC_CTX_GetApSecInitStateAddr
 ��������  : ��ȡAP Security˫�����ļ���ʼ��״̬��ַ
 �������  : ��
 �������  : ��
 �� �� ֵ  : ����˫�����ļ���ʼ��״̬��ַ
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��08��30��
    ��    ��   : h59254
    �޸�����   : �����ɺ���
*****************************************************************************/
extern VOS_UINT32*  SC_CTX_GetApSecInitStateAddr(VOS_VOID);

/*****************************************************************************
 �� �� ��  : SC_CTX_GetApSecItemBaseAddr
 ��������  : ��ȡAP Security˫�����ļ��������ڴ��е���ʼ��ַ
 �������  : ��
 �������  : ��
 �� �� ֵ  : ����AP Security˫�����ļ��������ڴ��е���ʼ��ַ
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��08��30��
    ��    ��   : h59254
    �޸�����   : �����ɺ���
*****************************************************************************/
extern SC_APSEC_ITEM_STRU*  SC_CTX_GetApSecItemBaseAddr(VOS_VOID);

/*****************************************************************************
 �� �� ��  : SC_CTX_GetSecATkeyFlg
 ��������  : ���ذ�ȫAT key�ı�־λ
 �������  : VOS_VOID
 �������  : ��
 �� �� ֵ  : VOS_UINT8
                VOS_TRUE    : ��ǰ�Ѿ����ð�ȫAT key
                VOS_FALSE   : ��ǰδ���ð�ȫAT key
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��9��2��
    ��    ��   : ���Ͻ�/00198894
    �޸�����   : �����ɺ���

*****************************************************************************/
extern VOS_UINT8 SC_CTX_GetSecATkeyFlg( VOS_VOID );

/*****************************************************************************
 �� �� ��  : SC_CTX_SetSecATkeyFlg
 ��������  : ���ð�ȫAT key�ı�־λ
 �������  : VOS_UINT8 ucSecATkeyFlg   - ��ȫAT key�ı�־λ
                 VOS_TRUE    : ��ǰ�Ѿ����ð�ȫAT key
                 VOS_FALSE   : ��ǰδ���ð�ȫAT key
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��9��2��
    ��    ��   : ���Ͻ�/00198894
    �޸�����   : �����ɺ���

*****************************************************************************/
extern VOS_VOID SC_CTX_SetSecATkeyFlg( VOS_UINT8 ucSecATkeyFlg );

/*****************************************************************************
 �� �� ��  : SC_CTX_GetSecATkeyAddr
 ��������  : ���ذ�ȫAT key���׵�ַ
 �������  : VOS_VOID
 �������  : ��
 �� �� ֵ  : VOS_UINT8* -- ��ȫAT key���׵�ַ
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��9��2��
    ��    ��   : ���Ͻ�/00198894
    �޸�����   : �����ɺ���

*****************************************************************************/
extern VOS_UINT8* SC_CTX_GetSecATkeyAddr( VOS_VOID );

/*****************************************************************************
 �� �� ��  : SC_CTX_GetApSecSeqID
 ��������  : ����SeqID
 �������  : VOS_VOID
 �������  : ��
 �� �� ֵ  : VOS_UINT8  -- SeqID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��9��2��
    ��    ��   : ���Ͻ�/00198894
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_UINT8 SC_CTX_GetApSecSeqID(VOS_VOID);

/*****************************************************************************
 �� �� ��  : SC_CTX_SetApSecSeqID
 ��������  : ����SeqID
 �������  : VOS_UINT8 ucSeqID   - SeqID
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��9��2��
    ��    ��   : ���Ͻ�/00198894
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID SC_CTX_SetApSecSeqID(VOS_UINT8 ucSeqID);


#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif