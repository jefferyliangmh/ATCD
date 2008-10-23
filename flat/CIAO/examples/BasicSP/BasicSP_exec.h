// $Id$
//
// ****              Code generated by the                 ****
// ****  Component Integrated ACE ORB (CIAO) CIDL Compiler ****
// CIAO has been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// CIDL Compiler has been developed by:
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about CIAO is available at:
//    http://www.dre.vanderbilt.edu/CIAO

#ifndef CIAO_BASICSP_EXEC_H
#define CIAO_BASICSP_EXEC_H

#include /**/ "ace/pre.h"

#include "tao/LocalObject.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "BasicSPEC.h"
#include "BasicSP_exec_export.h"

namespace MyImpl
{
  /**
   * @class ReadData_Impl
   *
   * Implementation of the ReadData interface
   */
  class BASICSP_EXEC_Export ReadData_Impl :
    public virtual ::BasicSP::CCM_ReadData,
    public virtual ::CORBA::LocalObject
  {
  public:
    /// Constructor
    ReadData_Impl(const char* name);

    void set_name (const char* name);

    virtual char *
    get_data ();

    ~ReadData_Impl();

  private:

    CORBA::String_var str_;

  };
}

#include /**/ "ace/post.h"

#endif /* CIAO_BASICSP_EXEC_H */
