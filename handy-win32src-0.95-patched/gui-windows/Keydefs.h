//
// Copyright (c) 2004 K. Wilkins
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from
// the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented; you must not
//    claim that you wrote the original software. If you use this software
//    in a product, an acknowledgment in the product documentation would be
//    appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such, and must not
//    be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//

#if !defined(AFX_KEYDEFS_H__BAA51A72_9164_4835_B898_FD590ECF1DAD__INCLUDED_)
#define AFX_KEYDEFS_H__BAA51A72_9164_4835_B898_FD590ECF1DAD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// KeyDefs.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CKeyDefs dialog

typedef struct
{
	UINT key_up;
	UINT key_down;
	UINT key_left;
	UINT key_right;
	UINT key_a;
	UINT key_b;
	UINT key_opt1;
	UINT key_opt2;
	UINT key_pause;

	UINT hub1_up;
	UINT hub1_down;
	UINT hub1_left;
	UINT hub1_right;
	UINT hub1_a;
	UINT hub1_b;

	UINT hub2_up;
	UINT hub2_down;
	UINT hub2_left;
	UINT hub2_right;
	UINT hub2_a;
	UINT hub2_b;
}KEYCONF;

// Defined for convenience as windows doesnt bother to define them
#define	VK_1	'1'
#define	VK_2	'2'
#define VK_A	'A'
#define VK_B	'B'
#define VK_C	'C'
#define VK_D	'D'
#define VK_E	'E'
#define VK_F	'F'
#define VK_G	'G'
#define VK_H	'H'
#define VK_I	'I'
#define VK_J	'J'
#define VK_K	'K'
#define VK_L	'L'
#define VK_M	'M'
#define VK_N	'N'
#define VK_O	'o'
#define VK_P	'P'
#define VK_Q	'Q'
#define VK_R	'R'
#define VK_S	'S'
#define VK_T	'T'
#define VK_U	'U'
#define VK_V	'V'
#define VK_W	'W'
#define VK_X	'X'
#define VK_Y	'Y'
#define VK_Z	'Z'

class CKeyDefs : public CDialog
{
// Construction
public:
	CKeyDefs(CWnd* pParent, KEYCONF *keyconf);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CKeyDefs)
	enum { IDD = IDD_KEYCONF };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CKeyDefs)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	KEYCONF	*mNewKeys;
	UINT	*mGrabNext;

	// Generated message map functions
	//{{AFX_MSG(CKeyDefs)
	afx_msg void OnKeydefA();
	afx_msg void OnKeydefB();
	afx_msg void OnKeydefDown();
	afx_msg void OnKeydefLeft();
	afx_msg void OnKeydefOpt1();
	afx_msg void OnKeydefOpt2();
	afx_msg void OnKeydefPause();
	afx_msg void OnKeydefRight();
	afx_msg void OnKeydefUp();

	afx_msg void OnHub1A();
	afx_msg void OnHub1B();
	afx_msg void OnHub1Down();
	afx_msg void OnHub1Left();
	afx_msg void OnHub1Right();
	afx_msg void OnHub1Up();

	afx_msg void OnHub2A();
	afx_msg void OnHub2B();
	afx_msg void OnHub2Down();
	afx_msg void OnHub2Left();
	afx_msg void OnHub2Right();
	afx_msg void OnHub2Up();

	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	BOOL PreTranslateMessage(MSG* pMsg);
	void GetKey(UINT *key);
	void UpdateButtons();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_KEYDEFS_H__BAA51A72_9164_4835_B898_FD590ECF1DAD__INCLUDED_)
