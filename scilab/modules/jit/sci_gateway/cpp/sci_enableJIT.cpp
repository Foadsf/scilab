/*
 * Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 * Copyright (C) 2013-2013 - LIP6 - Peter Senna Tschudin
 *
 * This file must be used under the terms of the CeCILL.
 * This source file is licensed as described in the file COPYING, which
 * you should have received as part of this distribution.  The terms
 * are also available at
 * http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */
#include "funcmanager.hxx"
#include "jit_gw.hxx"
#include "configvariable.hxx"
#include "function.hxx"

extern "C"
{
#include "sciprint.h"
#include "localization.h"
}

/*--------------------------------------------------------------------------*/
using namespace types;
/*--------------------------------------------------------------------------*/
Function::ReturnValue sci_enableJIT(types::typed_list &in, int _iRetCount, types::typed_list &out)
{
    sciprint(_("Enable JIT\n"));

    ConfigVariable::enableJIT();

    return Function::OK;
}
/*--------------------------------------------------------------------------*/