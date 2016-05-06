/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : E5NasAppInterface.h
  �� �� ��   : ����
  ��    ��   : z40661
  ��������   : 2010��9��8��
  ����޸�   :
  ��������   : E5��Ӧ�õĽӿ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2010��9��8��
    ��    ��   : z40661
    �޸�����   : �����ļ�

******************************************************************************/

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#ifndef _E5NASAPPINTERFACE_H_
#define _E5NASAPPINTERFACE_H_


/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/


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
  2 ȫ�ֱ�������
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

typedef int  (*pAppComRecv)(unsigned char  ucPortNo, unsigned char* pucData, unsigned short uslength);


/*****************************************************************************
 �� �� ��  :  E5_APP_RegCallBack
 ��������  : �ṩ��Ӧ��ע��ص�ָ��,APP��Э��ջע�ᷢ�����ݵĺ���ָ��,ͬʱ֪ͨЭ��ջ�������ݵ�ָ��
 �������  :  uPortNo������ʵ���š�
              pRcvCallback : APP�������ݵĺ���ָ��
 �������  :  pCallback   :APP�������ݵ�Э��ջ�ĺ���ָ��
 ����ֵ     :  0:ע��ɹ�
               1:ע��ʧ��
*****************************************************************************/
extern int  E5_APP_RegCallBack(unsigned char  ucPortNo, pAppComRecv pRcvCallback ,pAppComRecv *pSendCallback);
#define APP_E5_APP_REG_CALLBACK(ucPortNo,pRcvCallback,pSendCallback)   E5_APP_RegCallBack(ucPortNo,pRcvCallback,pSendCallback)

/*****************************************************************************
 �� �� ��  : E5_com_get_status
 ��������  : E5ͨ��״̬��ȡ
 �������  : ��
 �������  : ��
 �� �� ֵ  : 0:  �����ɹ���
             -1������ʧ�ܡ�

 �޸���ʷ      :
 1.��    ��   : 2010��9��7��
   ��    ��   : sunshaohua
   �޸�����   : �����ɺ���
*****************************************************************************/
extern int E5_com_get_status(unsigned char no);
#define APP_E5_COM_GET_STATUS(no)   E5_com_get_status(no)

/* �ṩ�ֻ�ģʽ��APP */
#define MN_PH_MODE_MINI                 0   /* minimum functionality*/
#define MN_PH_MODE_FULL                 1   /* full functionality */
#define MN_PH_MODE_TXOFF                2   /* disable phone transmit RF circuits only */
#define MN_PH_MODE_RXOFF                3   /* disable phone receive RF circuits only */
#define MN_PH_MODE_RFOFF                4   /* disable phone both transmit and receive RF circuits */
#define MN_PH_MODE_FT                   5   /* factory-test functionality */
#define MN_PH_MODE_LOWPOWER             7

extern unsigned char MN_PH_AppQryPhMode (void);
#define APP_MN_PH_AppQryPhMode() MN_PH_AppQryPhMode()

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
