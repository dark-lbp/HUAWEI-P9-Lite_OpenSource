
#include "omringbuffer.h"

#if(FEATURE_ON == FEATURE_PTM)
#define OM_RING_BUFF_EX_MAX_LEN  (1024*8)
#define OM_MAX_RING_BUFFER_NUM   (48)  /* Error log����32*/
#else
#define OM_MAX_RING_BUFFER_NUM   (16)
#endif

extern VOS_UINT8 g_ucOMBufferOccupiedFlag[];
extern OM_RING   g_stOMControlBlock[];

/*******************************************************************
�����������      : OM_RingBufferCreate_001
������������      : �ڴ�����ʧ����
Ԥ�ڽ��          : ��������NULL
�޸���ʷ          :
1.��   ��  : 2012-08-27
  ��   ��  : x51137
  �޸����� : v9r1MSP��ֺͿ�ά�ɲ⿪����Ŀ�޸ĺ���
*******************************************************************/
VOS_UINT32 uttest_OM_RingBufferCreate_case1(VOS_VOID)
{
	OM_RING_ID		pstRing;

	pstRing = OM_RingBufferCreate(100);

	// ִ�м��
	if (VOS_NULL_PTR != pstRing)
	{
	    return VOS_ERR;
	}

	return VOS_OK;
}

/*******************************************************************
�����������      : OM_RingBufferCreate_002
������������      : �����ɹ�
Ԥ�ڽ��          : �������ؿ��ƽṹ��
�޸���ʷ          :
1.��   ��  : 2012-08-27
  ��   ��  : x51137
  �޸����� : v9r1MSP��ֺͿ�ά�ɲ⿪����Ŀ�޸ĺ���
*******************************************************************/
VOS_UINT32 uttest_OM_RingBufferCreate_case2(VOS_VOID)
{
	OM_RING_ID		pstRing;

	pstRing = OM_RingBufferCreate(100);

	// ִ�м��
	if (VOS_NULL_PTR == pstRing)
	{
	    return VOS_ERR;
	}

	return VOS_OK;
}

/*******************************************************************
�����������      : OM_RingBufferCreate_003
������������      : Buffer������Ϣ�Ѿ�����
Ԥ�ڽ��          : ��������NULL
�޸���ʷ          :
1.��   ��  : 2012-08-27
  ��   ��  : x51137
  �޸����� : v9r1MSP��ֺͿ�ά�ɲ⿪����Ŀ�޸ĺ���
*******************************************************************/
VOS_UINT32 uttest_OM_RingBufferCreate_case3(VOS_VOID)
{
	VOS_INT         i;
	OM_RING_ID		pstRing;

	for ( i=OM_MAX_RING_BUFFER_NUM -1; i>=0; i-- )
    {
        g_ucOMBufferOccupiedFlag[i] = VOS_TRUE;
    }

	pstRing = OM_RingBufferCreate(100);

	for ( i=OM_MAX_RING_BUFFER_NUM -1; i>=0; i-- )
    {
        g_ucOMBufferOccupiedFlag[i] = VOS_FALSE;
    }

	// ִ�м��
	if (VOS_NULL_PTR != pstRing)
	{
	    return VOS_ERR;
	}

	return VOS_OK;

}

/*******************************************************************
�����������      : OM_RingBufferCreateEx_001
������������      : ����ָ��ΪNULL
Ԥ�ڽ��          : ��������NULL
�޸���ʷ          :
1.��   ��  : 2013-09-03
  ��   ��  : d00212987
  �޸����� : Error Log�ϱ��͹���ģʽ��Ŀ��������
*******************************************************************/
VOS_UINT32 uttest_OM_RingBufferCreateEx_case1(VOS_VOID)
{
#if(FEATURE_ON == FEATURE_PTM)

	OM_RING_ID		        pstRing;
    VOS_CHAR               *puc = VOS_NULL_PTR;

	pstRing = OM_RingBufferCreateEx(puc,100);

	// ִ�м��
	if (VOS_NULL_PTR != pstRing)
	{
	    return VOS_ERR;
	}
#endif

	return VOS_OK;
}

/*******************************************************************
�����������      : OM_RingBufferCreateEx_002
������������      : �����ռ����8k
Ԥ�ڽ��          : ��������NULL
�޸���ʷ          :
1.��   ��  : 2013-09-03
  ��   ��  : d00212987
  �޸����� : Error Log�ϱ��͹���ģʽ��Ŀ��������
*******************************************************************/
VOS_UINT32 uttest_OM_RingBufferCreateEx_case2(VOS_VOID)
{
#if(FEATURE_ON == FEATURE_PTM)

	OM_RING_ID		        pstRing;
    VOS_CHAR               auc[100] = {0};

	pstRing = OM_RingBufferCreateEx(auc,9*1024);

	// ִ�м��
	if(VOS_NULL_PTR != pstRing)
	{
	    return VOS_ERR;
	}
#endif

	return VOS_OK;
}

/*******************************************************************
�����������      : OM_RingBufferCreateEx_003
������������      : Buffer������Ϣ�Ѿ�����
Ԥ�ڽ��          : ��������NULL
�޸���ʷ          :
1.��   ��  : 2013-09-03
  ��   ��  : d00212987
  �޸����� : Error Log�ϱ��͹���ģʽ��Ŀ��������
*******************************************************************/
VOS_UINT32 uttest_OM_RingBufferCreateEx_case3(VOS_VOID)
{
#if(FEATURE_ON == FEATURE_PTM)

    OM_RING_ID		        pstRing;
    VOS_CHAR               auc[100] = {0};
    VOS_INT                 i;

	for ( i=OM_MAX_RING_BUFFER_NUM -1; i>=0; i-- )
    {
        g_ucOMBufferOccupiedFlag[i] = VOS_TRUE;
    }

	pstRing = OM_RingBufferCreateEx(auc,100);

    for ( i=OM_MAX_RING_BUFFER_NUM -1; i>=0; i-- )
    {
        g_ucOMBufferOccupiedFlag[i] = VOS_FALSE;
    }

	// ִ�м��
	if (VOS_NULL_PTR != pstRing)
	{
	    return VOS_ERR;
	}
#endif

	return VOS_OK;
}

/*******************************************************************
�����������      : OM_RingBufferCreateEx_004
������������      : ��������buffer�ɹ�
Ԥ�ڽ��          : ��������NULL
�޸���ʷ          :
1.��   ��  : 2013-09-03
  ��   ��  : d00212987
  �޸����� : Error Log�ϱ��͹���ģʽ��Ŀ��������
*******************************************************************/
VOS_UINT32 uttest_OM_RingBufferCreateEx_case4(VOS_VOID)
{
#if(FEATURE_ON == FEATURE_PTM)

    VOS_CHAR               auc[100] = {0};
    OM_RING_ID		        pstRing;

    pstRing = OM_RingBufferCreateEx(auc,100);

	// ִ�м��
	if (100 != pstRing->bufSize)
	{
	    return VOS_ERR;
	}
#endif

	return VOS_OK;
}

/*******************************************************************
�����������      : OM_RingBufferNBytes_001
������������      : ����buffer���ֽ���
Ԥ�ڽ��          : ���������ֽ���
�޸���ʷ          :
1.��   ��  : 2013-11-26
	��   ��  : J00168360
	�޸����� :
*******************************************************************/
VOS_UINT32 uttest_OM_RingBufferNBytes_case1(VOS_VOID)
{
    OM_RING_ID		        pstRing;
    int                     i;

	for ( i=OM_MAX_RING_BUFFER_NUM -1; i>=0; i-- )
	{
		g_ucOMBufferOccupiedFlag[i] = VOS_FALSE;
	}

	pstRing = OM_RingBufferCreate(100);

	pstRing->pToBuf = 10;
	pstRing->pFromBuf = 100;

	pstRing->bufSize = 120;

	// ִ�м��
	if (30 != OM_RingBufferNBytes(pstRing))
    {
        return VOS_ERR;
    }

    return VOS_OK;
}

/*******************************************************************
�����������      : OM_RingBufferNBytes_001
������������      : ����buffer�п����ֽ���
Ԥ�ڽ��          : ���������ֽ���
�޸���ʷ          :
1.��   ��  : 2013-11-26
	��   ��  : J00168360
	�޸����� :
*******************************************************************/
VOS_UINT32 uttest_OM_RingBufferFreeBytes_case1(VOS_VOID)
{
    OM_RING_ID		       pstRing;

	pstRing = OM_RingBufferCreate(100);

	pstRing->pToBuf = 100;
	pstRing->pFromBuf = 10;

	pstRing->bufSize = 120;

	// ִ�м��
	if (29 != OM_RingBufferFreeBytes(pstRing))
    {
        return VOS_ERR;
    }

    return VOS_OK;

}

/*******************************************************************
�����������      : OM_RingBufferIsFull_001
������������      : ����buffer������
Ԥ�ڽ��          : ���������ֽ���
�޸���ʷ          :
1.��   ��  : 2013-11-26
	��   ��  : J00168360
	�޸����� :
*******************************************************************/
VOS_UINT32 uttest_OM_RingBufferIsFull_case1(VOS_VOID)
{
    OM_RING_ID		       pstRing;

	pstRing = OM_RingBufferCreate(100);

	pstRing->pToBuf = 100;
	pstRing->pFromBuf = 101;

	pstRing->bufSize = 120;

	// ִ�м��
	if (VOS_TRUE != OM_RingBufferIsFull(pstRing))
    {
        return VOS_ERR;
    }

    return VOS_OK;

}

/*******************************************************************
�����������      : OM_RingBufferIsFull_001
������������      : ����buffer��δ��
Ԥ�ڽ��          : ���������ֽ���
�޸���ʷ          :
1.��   ��  : 2013-11-26
	��   ��  : J00168360
	�޸����� :
*******************************************************************/
VOS_UINT32 uttest_OM_RingBufferIsFull_case2(VOS_VOID)
{
    OM_RING_ID		       pstRing;

	pstRing = OM_RingBufferCreate(100);

	pstRing->pToBuf = 100;
	pstRing->pFromBuf = 100;

	pstRing->bufSize = 120;

	// ִ�м��
	if (VOS_FALSE != OM_RingBufferIsFull(pstRing))
    {
        return VOS_ERR;
    }

    return VOS_OK;

}

/*******************************************************************
�����������      : OM_RingBufferIsEmpty_001
������������      : ����buffer��δ��
Ԥ�ڽ��          : ���������ֽ���
�޸���ʷ          :
1.��   ��  : 2013-11-26
	��   ��  : J00168360
	�޸����� :
*******************************************************************/
VOS_UINT32 uttest_OM_RingBufferIsEmpty_case1(VOS_VOID)
{
    OM_RING_ID		       pstRing;

	pstRing = OM_RingBufferCreate(100);

	pstRing->pToBuf = 100;
	pstRing->pFromBuf = 101;

	pstRing->bufSize = 120;

	// ִ�м��
	if (VOS_FALSE != OM_RingBufferIsEmpty(pstRing))
    {
        return VOS_ERR;
    }

    return VOS_OK;

}

/*******************************************************************
�����������      : OM_RingBufferIsEmpty_001
������������      : ����buffer��δ��
Ԥ�ڽ��          : ���������ֽ���
�޸���ʷ          :
1.��   ��  : 2013-11-26
	��   ��  : J00168360
	�޸����� :
*******************************************************************/
VOS_UINT32 uttest_OM_RingBufferGetReserve_case1(VOS_VOID)
{
    OM_RING_ID		       pstRing;
	char aucbuffer[100];
	int maxbytes = 100;

	pstRing = OM_RingBufferCreate(100);

	pstRing->pToBuf = 10;
	pstRing->pFromBuf = 100;

	pstRing->bufSize = 120;

	// ִ�м��
	if (30 != OM_RingBufferGetReserve(pstRing, aucbuffer, maxbytes))
    {
        return VOS_ERR;
    }

    return VOS_OK;

}

/*******************************************************************
�����������      : OM_RingBufferIsEmpty_001
������������      : ����buffer��δ��
Ԥ�ڽ��          : ���������ֽ���
�޸���ʷ          :
1.��   ��  : 2013-11-26
	��   ��  : J00168360
	�޸����� :
*******************************************************************/
VOS_UINT32 uttest_OM_RingBufferGetReserve_case2(VOS_VOID)
{
    OM_RING_ID		       pstRing;
	char aucbuffer[100];
	int maxbytes = 100;

	pstRing = OM_RingBufferCreate(100);

	pstRing->pToBuf = 100;
	pstRing->pFromBuf = 10;

	pstRing->bufSize = 120;

	// ִ�м��
	if (90 != OM_RingBufferGetReserve(pstRing, aucbuffer, maxbytes))
    {
        return VOS_ERR;
    }

    return VOS_OK;

}

/*******************************************************************
�����������      : OM_RingBufferRemove_001
������������      : ����buffer��δ��
Ԥ�ڽ��          : ���������ֽ���
�޸���ʷ          :
1.��   ��  : 2013-11-26
	��   ��  : J00168360
	�޸����� :
*******************************************************************/
VOS_UINT32 uttest_OM_RingBufferRemove_case1(VOS_VOID)
{
    OM_RING_ID		       pstRing;
	int maxbytes = 100;

	pstRing = OM_RingBufferCreate(100);

	pstRing->pToBuf = 10;
	pstRing->pFromBuf = 100;

	pstRing->bufSize = 120;

	// ִ�м��
	if (30 != OM_RingBufferRemove(pstRing, maxbytes))
    {
        return VOS_ERR;
    }

    return VOS_OK;

}

/*******************************************************************
�����������      : OM_RingBufferRemove_001
������������      : ����buffer��δ��
Ԥ�ڽ��          : ���������ֽ���
�޸���ʷ          :
1.��   ��  : 2013-11-26
	��   ��  : J00168360
	�޸����� :
*******************************************************************/
VOS_UINT32 uttest_OM_RingBufferRemove_case2(VOS_VOID)
{
    OM_RING_ID		       pstRing;
	int maxbytes = 100;

	pstRing = OM_RingBufferCreate(100);

	pstRing->pToBuf = 100;
	pstRing->pFromBuf = 10;

	pstRing->bufSize = 120;

	// ִ�м��
	if (90 != OM_RingBufferRemove(pstRing, maxbytes))
    {
        return VOS_ERR;
    }

    return VOS_OK;

}

/*******************************************************************
�����������      : OM_RingBufferRemove_001
������������      : ����buffer��δ��
Ԥ�ڽ��          : ���������ֽ���
�޸���ʷ          :
1.��   ��  : 2013-11-26
	��   ��  : J00168360
	�޸����� :
*******************************************************************/
VOS_UINT32 uttest_OM_RingBufferRemove_case3(VOS_VOID)
{
    OM_RING_ID		       pstRing;
	int maxbytes = 200;

	pstRing = OM_RingBufferCreate(100);

	pstRing->pToBuf = 10;
	pstRing->pFromBuf = 100;

	pstRing->bufSize = 150;

	// ִ�м��
	if (60 != OM_RingBufferRemove(pstRing, maxbytes))
    {
        return VOS_ERR;
    }

    return VOS_OK;

}

/*******************************************************************
�����������      : OM_RingBufferPut_001
������������      : ����buffer��δ��
Ԥ�ڽ��          : ���������ֽ���
�޸���ʷ          :
1.��   ��  : 2013-11-26
	��   ��  : J00168360
	�޸����� :
*******************************************************************/
VOS_UINT32 uttest_OM_RingBufferPut_case1(VOS_VOID)
{
    OM_RING_ID		       pstRing;
	char aucbuffer[100];
	int maxbytes = 100;

	pstRing = OM_RingBufferCreate(100);

	pstRing->pToBuf = 10;
	pstRing->pFromBuf = 100;

	pstRing->bufSize = 120;

	// ִ�м��
	if (89 != OM_RingBufferPut(pstRing, aucbuffer, maxbytes))
    {
        return VOS_ERR;
    }

    return VOS_OK;

}

/*******************************************************************
�����������      : OM_RingBufferPut_001
������������      : ����buffer��δ��
Ԥ�ڽ��          : ���������ֽ���
�޸���ʷ          :
1.��   ��  : 2013-11-26
	��   ��  : J00168360
	�޸����� :
*******************************************************************/
VOS_UINT32 uttest_OM_RingBufferPut_case2(VOS_VOID)
{
    OM_RING_ID		       pstRing;
	char aucbuffer[100];
	int maxbytes = 100;

	pstRing = OM_RingBufferCreate(100);

	pstRing->pToBuf = 100;
	pstRing->pFromBuf = 10;

	pstRing->bufSize = 120;

	// ִ�м��
	if (29 != OM_RingBufferPut(pstRing, aucbuffer, maxbytes))
    {
        return VOS_ERR;
    }

    return VOS_OK;

}

/*******************************************************************
�����������      : OM_RingBufferPut_001
������������      : ����buffer��δ��
Ԥ�ڽ��          : ���������ֽ���
�޸���ʷ          :
1.��   ��  : 2013-11-26
	��   ��  : J00168360
	�޸����� :
*******************************************************************/
VOS_UINT32 uttest_OM_RingBufferPut_case3(VOS_VOID)
{
    OM_RING_ID		       pstRing;
	char aucbuffer[100];
	int maxbytes = 100;

	pstRing = OM_RingBufferCreate(100);

	pstRing->pToBuf = 100;
	pstRing->pFromBuf = 0;

	pstRing->bufSize = 120;

	// ִ�м��
	if (19 != OM_RingBufferPut(pstRing, aucbuffer, maxbytes))
    {
        return VOS_ERR;
    }

    return VOS_OK;

}

/*******************************************************************
�����������      : OM_RingBufferGet_001
������������      : ����buffer��δ��
Ԥ�ڽ��          : ���������ֽ���
�޸���ʷ          :
1.��   ��  : 2013-11-26
	��   ��  : J00168360
	�޸����� :
*******************************************************************/
VOS_UINT32 uttest_OM_RingBufferGet_case4(VOS_VOID)
{
    OM_RING_ID		       pstRing;
	char aucbuffer[100];
	int maxbytes = 100;

	pstRing = OM_RingBufferCreate(100);

	pstRing->pToBuf = 10;
	pstRing->pFromBuf = 100;

	pstRing->bufSize = 120;

	// ִ�м��
	if (30 != OM_RingBufferGet(pstRing, aucbuffer, maxbytes))
    {
        return VOS_ERR;
    }

    return VOS_OK;

}

/*******************************************************************
�����������      : OM_RingBufferPut_001
������������      : ����buffer��δ��
Ԥ�ڽ��          : ���������ֽ���
�޸���ʷ          :
1.��   ��  : 2013-11-26
	��   ��  : J00168360
	�޸����� :
*******************************************************************/
VOS_UINT32 uttest_OM_RingBufferGet_case5(VOS_VOID)
{
    OM_RING_ID		       pstRing;
	char aucbuffer[100];
	int maxbytes = 100;

	pstRing = OM_RingBufferCreate(100);

	pstRing->pToBuf = 100;
	pstRing->pFromBuf = 10;

	pstRing->bufSize = 120;

	// ִ�м��
	if (90 != OM_RingBufferGet(pstRing, aucbuffer, maxbytes))
    {
        return VOS_ERR;
    }

    return VOS_OK;

}