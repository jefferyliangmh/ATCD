// $Id$

#include "fe_utils.h"

#include "utl_scoped_name.h"
#include "utl_strlist.h"
#include "utl_namelist.h"
#include "utl_identifier.h"

FE_Utils::T_Ref_Info::T_Ref_Info (void)
  : name_ (0),
    params_ (0)
{
}

FE_Utils::T_Ref_Info::T_Ref_Info (UTL_ScopedName *n,
                                  UTL_StrList *strs)
  : name_ (n),
    params_ (strs)
{
}

void
FE_Utils::T_Ref_Info::destroy (void)
{
  if (name_ != 0)
    {
      name_->destroy ();
      delete name_;
      name_ = 0;
    }

  if (params_ != 0)
    {
      params_->destroy ();
      delete params_;
      params_ = 0;
    }
}

FE_Utils::T_Inst_Info::T_Inst_Info (UTL_ScopedName *n,
                                    UTL_NameList *args)
  : name_ (n),
    args_ (args)
{
}

void
FE_Utils::T_Inst_Info::destroy (void)
{
  // The template args are owned by the AST type.

  this->name_->destroy ();
  delete this->name_;
  this->name_ = 0;
}