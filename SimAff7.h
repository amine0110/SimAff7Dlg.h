
// SimAff7.h�: fichier d'en-t�te principal pour l'application PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "incluez 'stdafx.h' avant d'inclure ce fichier pour PCH"
#endif

#include "resource.h"		// symboles principaux


// CSimAff7App�:
// Consultez SimAff7.cpp pour l'impl�mentation de cette classe
//

class CSimAff7App : public CWinApp
{
public:
	CSimAff7App();

// Substitutions
public:
	virtual BOOL InitInstance();

// Impl�mentation

	DECLARE_MESSAGE_MAP()
};

extern CSimAff7App theApp;