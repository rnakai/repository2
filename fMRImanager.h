// fMRImanager.h : FMRIMANAGER アプリケーションのメイン ヘッダー ファイルです。
//

#if !defined(AFX_FMRIMANAGER_H__A9F69AF6_4F06_411C_A448_117A6AE7CE58__INCLUDED_)
#define AFX_FMRIMANAGER_H__A9F69AF6_4F06_411C_A448_117A6AE7CE58__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// メイン シンボル

/////////////////////////////////////////////////////////////////////////////
// CFMRImanagerApp:
// このクラスの動作の定義に関しては fMRImanager.cpp ファイルを参照してください。
//

class CFMRImanagerApp : public CWinApp
{
public:
	CFMRImanagerApp();

// オーバーライド
	// ClassWizard は仮想関数のオーバーライドを生成します。
	//{{AFX_VIRTUAL(CFMRImanagerApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// インプリメンテーション

	//{{AFX_MSG(CFMRImanagerApp)
		// メモ - ClassWizard はこの位置にメンバ関数を追加または削除します。
		//        この位置に生成されるコードを編集しないでください。
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_FMRIMANAGER_H__A9F69AF6_4F06_411C_A448_117A6AE7CE58__INCLUDED_)
