// fMRImanager.h : FMRIMANAGER �A�v���P�[�V�����̃��C�� �w�b�_�[ �t�@�C���ł��B
//

#if !defined(AFX_FMRIMANAGER_H__A9F69AF6_4F06_411C_A448_117A6AE7CE58__INCLUDED_)
#define AFX_FMRIMANAGER_H__A9F69AF6_4F06_411C_A448_117A6AE7CE58__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// ���C�� �V���{��

/////////////////////////////////////////////////////////////////////////////
// CFMRImanagerApp:
// ���̃N���X�̓���̒�`�Ɋւ��Ă� fMRImanager.cpp �t�@�C�����Q�Ƃ��Ă��������B
//

class CFMRImanagerApp : public CWinApp
{
public:
	CFMRImanagerApp();

// �I�[�o�[���C�h
	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂��B
	//{{AFX_VIRTUAL(CFMRImanagerApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// �C���v�������e�[�V����

	//{{AFX_MSG(CFMRImanagerApp)
		// ���� - ClassWizard �͂��̈ʒu�Ƀ����o�֐���ǉ��܂��͍폜���܂��B
		//        ���̈ʒu�ɐ��������R�[�h��ҏW���Ȃ��ł��������B
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_FMRIMANAGER_H__A9F69AF6_4F06_411C_A448_117A6AE7CE58__INCLUDED_)
