// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_codegen.cpp:151

#ifndef _TAO_IDL_ORIG_IOP_CODECC_H_
#define _TAO_IDL_ORIG_IOP_CODECC_H_

#include "ace/pre.h"

#include "tao/corbafwd.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/TAO_export.h"
#include "tao/Object.h"
#include "tao/Exception.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_Export

#if defined (TAO_EXPORT_NESTED_CLASSES)
#  if defined (TAO_EXPORT_NESTED_MACRO)
#    undef TAO_EXPORT_NESTED_MACRO
#  endif /* defined (TAO_EXPORT_NESTED_MACRO) */
#  define TAO_EXPORT_NESTED_MACRO TAO_Export
#endif /* TAO_EXPORT_NESTED_CLASSES */

#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif /* _MSC_VER >= 1200 */
#pragma warning(disable:4250)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option push -w-rvl -w-rch -w-ccc -w-inl
#endif /* __BORLANDC__ */

// TAO_IDL - Generated from
// C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_module/module_ch.cpp:48

TAO_NAMESPACE  IOP
{

  // TAO_IDL - Generated from
  // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ch.cpp:52

#if !defined (_IOP_CODEC___PTR_CH_)
#define _IOP_CODEC___PTR_CH_

  class Codec;
  typedef Codec *Codec_ptr;

#endif /* end #if !defined */

#if !defined (_IOP_CODEC___VAR_CH_)
#define _IOP_CODEC___VAR_CH_

  // TAO_IDL - Generated from
  // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:565

  class TAO_Export Codec_var : private TAO_Base_var
  {
  public:
    Codec_var (void); // default constructor
    Codec_var (Codec_ptr p) : ptr_ (p) {}
    Codec_var (const Codec_var &); // copy constructor
    ~Codec_var (void); // destructor

    Codec_var &operator= (Codec_ptr);
    Codec_var &operator= (const Codec_var &);
    Codec_ptr operator-> (void) const;

    operator const Codec_ptr &() const;
    operator Codec_ptr &();
    // in, inout, out, _retn
    Codec_ptr in (void) const;
    Codec_ptr &inout (void);
    Codec_ptr &out (void);
    Codec_ptr _retn (void);
    Codec_ptr ptr (void) const;

    // Hooks used by template sequence and object manager classes
    // for non-defined forward declared interfaces.
    static Codec_ptr tao_duplicate (Codec_ptr);
    static void tao_release (Codec_ptr);
    static Codec_ptr tao_nil (void);
    static Codec_ptr tao_narrow (
        CORBA::Object *
        ACE_ENV_ARG_DECL
      );
    static CORBA::Object * tao_upcast (void *);

  private:
    Codec_ptr ptr_;
    // Unimplemented - prevents widening assignment.
    Codec_var (const TAO_Base_var & rhs);
    Codec_var & operator= (const TAO_Base_var & rhs);
  };

#endif /* end #if !defined */

#if !defined (_IOP_CODEC___OUT_CH_)
#define _IOP_CODEC___OUT_CH_

  // TAO_IDL - Generated from
  // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:946

  class TAO_Export Codec_out
  {
  public:
    Codec_out (Codec_ptr &);
    Codec_out (Codec_var &);
    Codec_out (const Codec_out &);
    Codec_out &operator= (const Codec_out &);
    Codec_out &operator= (const Codec_var &);
    Codec_out &operator= (Codec_ptr);
    operator Codec_ptr &();
    Codec_ptr &ptr (void);
    Codec_ptr operator-> (void);

  private:
    Codec_ptr &ptr_;
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ch.cpp:110

#if !defined (_IOP_CODEC_CH_)
#define _IOP_CODEC_CH_

  class TAO_Export Codec
    : public virtual CORBA::Object
  {
  public:
    typedef Codec_ptr _ptr_type;
    typedef Codec_var _var_type;
    static int _tao_class_id;

    // The static operations.
    static Codec_ptr _duplicate (Codec_ptr obj);

    static Codec_ptr _narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    static Codec_ptr _unchecked_narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    static Codec_ptr _nil (void)
      {
        return (Codec_ptr)0;
      }

    static void _tao_any_destructor (void *);

    // TAO_IDL - Generated from
    // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_exception/exception_ch.cpp:51

#if !defined (_IOP_CODEC_INVALIDTYPEFORENCODING_CH_)
#define _IOP_CODEC_INVALIDTYPEFORENCODING_CH_

    class TAO_Export InvalidTypeForEncoding : public CORBA::UserException
    {
    public:

      InvalidTypeForEncoding (void);
      InvalidTypeForEncoding (const InvalidTypeForEncoding &);
      ~InvalidTypeForEncoding (void);

      InvalidTypeForEncoding &operator= (const InvalidTypeForEncoding &);

      static void _tao_any_destructor (void *);

      static InvalidTypeForEncoding *_downcast (CORBA::Exception *);
      static CORBA::Exception *_alloc (void);

      virtual CORBA::Exception *_tao_duplicate (void) const;

      virtual void _raise (void);

      virtual void _tao_encode (
          TAO_OutputCDR &
          ACE_ENV_ARG_DECL_NOT_USED
        ) const;

      virtual void _tao_decode (
          TAO_InputCDR &
          ACE_ENV_ARG_DECL_NOT_USED
        );

      // TAO_IDL - Generated from
      // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_exception/exception_ch.cpp:125

      virtual CORBA::TypeCode_ptr _type (void) const;
    };

    // TAO_IDL - Generated from
    // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_decl.cpp:44

    static ::CORBA::TypeCode_ptr _tc_InvalidTypeForEncoding;

#endif /* end #if !defined */

    // TAO_IDL - Generated from
    // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_exception/exception_ch.cpp:51

#if !defined (_IOP_CODEC_FORMATMISMATCH_CH_)
#define _IOP_CODEC_FORMATMISMATCH_CH_

    class TAO_Export FormatMismatch : public CORBA::UserException
    {
    public:

      FormatMismatch (void);
      FormatMismatch (const FormatMismatch &);
      ~FormatMismatch (void);

      FormatMismatch &operator= (const FormatMismatch &);

      static void _tao_any_destructor (void *);

      static FormatMismatch *_downcast (CORBA::Exception *);
      static CORBA::Exception *_alloc (void);

      virtual CORBA::Exception *_tao_duplicate (void) const;

      virtual void _raise (void);

      virtual void _tao_encode (
          TAO_OutputCDR &
          ACE_ENV_ARG_DECL_NOT_USED
        ) const;

      virtual void _tao_decode (
          TAO_InputCDR &
          ACE_ENV_ARG_DECL_NOT_USED
        );

      // TAO_IDL - Generated from
      // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_exception/exception_ch.cpp:125

      virtual CORBA::TypeCode_ptr _type (void) const;
    };

    // TAO_IDL - Generated from
    // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_decl.cpp:44

    static ::CORBA::TypeCode_ptr _tc_FormatMismatch;

#endif /* end #if !defined */

    // TAO_IDL - Generated from
    // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_exception/exception_ch.cpp:51

#if !defined (_IOP_CODEC_TYPEMISMATCH_CH_)
#define _IOP_CODEC_TYPEMISMATCH_CH_

    class TAO_Export TypeMismatch : public CORBA::UserException
    {
    public:

      TypeMismatch (void);
      TypeMismatch (const TypeMismatch &);
      ~TypeMismatch (void);

      TypeMismatch &operator= (const TypeMismatch &);

      static void _tao_any_destructor (void *);

      static TypeMismatch *_downcast (CORBA::Exception *);
      static CORBA::Exception *_alloc (void);

      virtual CORBA::Exception *_tao_duplicate (void) const;

      virtual void _raise (void);

      virtual void _tao_encode (
          TAO_OutputCDR &
          ACE_ENV_ARG_DECL_NOT_USED
        ) const;

      virtual void _tao_decode (
          TAO_InputCDR &
          ACE_ENV_ARG_DECL_NOT_USED
        );

      // TAO_IDL - Generated from
      // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_exception/exception_ch.cpp:125

      virtual CORBA::TypeCode_ptr _type (void) const;
    };

    // TAO_IDL - Generated from
    // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_decl.cpp:44

    static ::CORBA::TypeCode_ptr _tc_TypeMismatch;

#endif /* end #if !defined */

    // TAO_IDL - Generated from
    // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/operation_ch.cpp:46

    virtual ::CORBA::OctetSeq * encode (
        const CORBA::Any & data
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
        , IOP::Codec::InvalidTypeForEncoding
      )) = 0;

    // TAO_IDL - Generated from
    // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/operation_ch.cpp:46

    virtual CORBA::Any * decode (
        const CORBA::OctetSeq & data
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
        , IOP::Codec::FormatMismatch
      )) = 0;

    // TAO_IDL - Generated from
    // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/operation_ch.cpp:46

    virtual ::CORBA::OctetSeq * encode_value (
        const CORBA::Any & data
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
        , IOP::Codec::InvalidTypeForEncoding
      )) = 0;

    // TAO_IDL - Generated from
    // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/operation_ch.cpp:46

    virtual CORBA::Any * decode_value (
        const CORBA::OctetSeq & data,
        CORBA::TypeCode_ptr tc
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
        , IOP::Codec::FormatMismatch
        , IOP::Codec::TypeMismatch
      )) = 0;

    // TAO_IDL - Generated from
    // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ch.cpp:267

    virtual void *_tao_QueryInterface (ptr_arith_t type);

    virtual const char* _interface_repository_id (void) const;

  protected:
    Codec (void);
    virtual ~Codec (void);

  private:
    Codec (const Codec &);
    void operator= (const Codec &);
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_decl.cpp:44

  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_Codec;

  // TAO_IDL - Generated from
  // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typedef/typedef_ch.cpp:334

  typedef CORBA::Short EncodingFormat;
  typedef CORBA::Short_out EncodingFormat_out;

  // TAO_IDL - Generated from
  // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_decl.cpp:44

  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_EncodingFormat;

  // TAO_IDL - Generated from
  // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_constant/constant_ch.cpp:52

  const CORBA::Short ENCODING_CDR_ENCAPS = 0;

  // TAO_IDL - Generated from
  // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_structure/structure_ch.cpp:49

  class Encoding_var;

  struct TAO_Export Encoding
  {
    typedef Encoding_var _var_type;

    static void _tao_any_destructor (void *);
    IOP::EncodingFormat format;
    CORBA::Octet major_version;
    CORBA::Octet minor_version;
  };

  // TAO_IDL - Generated from
  // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_structure.cpp:71

  class TAO_Export Encoding_var
  {
  public:
    Encoding_var (void);
    Encoding_var (Encoding *);
    Encoding_var (const Encoding_var &);
    // Fixed-size types only.
    Encoding_var (const Encoding &);
    ~Encoding_var (void);

    Encoding_var &operator= (Encoding *);
    Encoding_var &operator= (const Encoding_var &);

    // Fixed-size types only.
    Encoding_var &operator= (const Encoding &);

    Encoding *operator-> (void);
    const Encoding *operator-> (void) const;

    operator const Encoding &() const;
    operator Encoding &();
    operator Encoding &() const;

    // in, inout, out, _retn
    const Encoding &in (void) const;
    Encoding &inout (void);
    Encoding &out (void);
    Encoding _retn (void);
    Encoding *ptr (void) const;

  private:
    Encoding *ptr_;
  };

  // TAO_IDL - Generated from
  // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_structure/structure_ch.cpp:105

  typedef Encoding &Encoding_out;

  // TAO_IDL - Generated from
  // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_decl.cpp:44

  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_Encoding;

  // TAO_IDL - Generated from
  // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ch.cpp:52

#if !defined (_IOP_CODECFACTORY___PTR_CH_)
#define _IOP_CODECFACTORY___PTR_CH_

  class CodecFactory;
  typedef CodecFactory *CodecFactory_ptr;

#endif /* end #if !defined */

#if !defined (_IOP_CODECFACTORY___VAR_CH_)
#define _IOP_CODECFACTORY___VAR_CH_

  // TAO_IDL - Generated from
  // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:565

  class TAO_Export CodecFactory_var : private TAO_Base_var
  {
  public:
    CodecFactory_var (void); // default constructor
    CodecFactory_var (CodecFactory_ptr p) : ptr_ (p) {}
    CodecFactory_var (const CodecFactory_var &); // copy constructor
    ~CodecFactory_var (void); // destructor

    CodecFactory_var &operator= (CodecFactory_ptr);
    CodecFactory_var &operator= (const CodecFactory_var &);
    CodecFactory_ptr operator-> (void) const;

    operator const CodecFactory_ptr &() const;
    operator CodecFactory_ptr &();
    // in, inout, out, _retn
    CodecFactory_ptr in (void) const;
    CodecFactory_ptr &inout (void);
    CodecFactory_ptr &out (void);
    CodecFactory_ptr _retn (void);
    CodecFactory_ptr ptr (void) const;

    // Hooks used by template sequence and object manager classes
    // for non-defined forward declared interfaces.
    static CodecFactory_ptr tao_duplicate (CodecFactory_ptr);
    static void tao_release (CodecFactory_ptr);
    static CodecFactory_ptr tao_nil (void);
    static CodecFactory_ptr tao_narrow (
        CORBA::Object *
        ACE_ENV_ARG_DECL
      );
    static CORBA::Object * tao_upcast (void *);

  private:
    CodecFactory_ptr ptr_;
    // Unimplemented - prevents widening assignment.
    CodecFactory_var (const TAO_Base_var & rhs);
    CodecFactory_var & operator= (const TAO_Base_var & rhs);
  };

#endif /* end #if !defined */

#if !defined (_IOP_CODECFACTORY___OUT_CH_)
#define _IOP_CODECFACTORY___OUT_CH_

  // TAO_IDL - Generated from
  // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:946

  class TAO_Export CodecFactory_out
  {
  public:
    CodecFactory_out (CodecFactory_ptr &);
    CodecFactory_out (CodecFactory_var &);
    CodecFactory_out (const CodecFactory_out &);
    CodecFactory_out &operator= (const CodecFactory_out &);
    CodecFactory_out &operator= (const CodecFactory_var &);
    CodecFactory_out &operator= (CodecFactory_ptr);
    operator CodecFactory_ptr &();
    CodecFactory_ptr &ptr (void);
    CodecFactory_ptr operator-> (void);

  private:
    CodecFactory_ptr &ptr_;
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ch.cpp:110

#if !defined (_IOP_CODECFACTORY_CH_)
#define _IOP_CODECFACTORY_CH_

  class TAO_Export CodecFactory
    : public virtual CORBA::Object
  {
  public:
    typedef CodecFactory_ptr _ptr_type;
    typedef CodecFactory_var _var_type;
    static int _tao_class_id;

    // The static operations.
    static CodecFactory_ptr _duplicate (CodecFactory_ptr obj);

    static CodecFactory_ptr _narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    static CodecFactory_ptr _unchecked_narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    static CodecFactory_ptr _nil (void)
      {
        return (CodecFactory_ptr)0;
      }

    static void _tao_any_destructor (void *);

    // TAO_IDL - Generated from
    // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_exception/exception_ch.cpp:51

#if !defined (_IOP_CODECFACTORY_UNKNOWNENCODING_CH_)
#define _IOP_CODECFACTORY_UNKNOWNENCODING_CH_

    class TAO_Export UnknownEncoding : public CORBA::UserException
    {
    public:

      UnknownEncoding (void);
      UnknownEncoding (const UnknownEncoding &);
      ~UnknownEncoding (void);

      UnknownEncoding &operator= (const UnknownEncoding &);

      static void _tao_any_destructor (void *);

      static UnknownEncoding *_downcast (CORBA::Exception *);
      static CORBA::Exception *_alloc (void);

      virtual CORBA::Exception *_tao_duplicate (void) const;

      virtual void _raise (void);

      virtual void _tao_encode (
          TAO_OutputCDR &
          ACE_ENV_ARG_DECL_NOT_USED
        ) const;

      virtual void _tao_decode (
          TAO_InputCDR &
          ACE_ENV_ARG_DECL_NOT_USED
        );

      // TAO_IDL - Generated from
      // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_exception/exception_ch.cpp:125

      virtual CORBA::TypeCode_ptr _type (void) const;
    };

    // TAO_IDL - Generated from
    // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_decl.cpp:44

    static ::CORBA::TypeCode_ptr _tc_UnknownEncoding;

#endif /* end #if !defined */

    // TAO_IDL - Generated from
    // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/operation_ch.cpp:46

    virtual ::IOP::Codec_ptr create_codec (
        const IOP::Encoding & enc
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
        , IOP::CodecFactory::UnknownEncoding
      )) = 0;

    // TAO_IDL - Generated from
    // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ch.cpp:267

    virtual void *_tao_QueryInterface (ptr_arith_t type);

    virtual const char* _interface_repository_id (void) const;

  protected:
    CodecFactory (void);
    virtual ~CodecFactory (void);

  private:
    CodecFactory (const CodecFactory &);
    void operator= (const CodecFactory &);
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_decl.cpp:44

  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_CodecFactory;

// TAO_IDL - Generated from
// C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_module/module_ch.cpp:67

}
TAO_NAMESPACE_CLOSE // module IOP

// TAO_IDL - Generated from
// C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, IOP::Codec_ptr); // copying
TAO_Export void operator<<= (CORBA::Any &, IOP::Codec_ptr *); // non-copying
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, IOP::Codec_ptr &);

// TAO_IDL - Generated from
// C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_exception/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, const IOP::Codec::InvalidTypeForEncoding &); // copying version
TAO_Export void operator<<= (CORBA::Any &, IOP::Codec::InvalidTypeForEncoding*); // noncopying version
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, IOP::Codec::InvalidTypeForEncoding *&); // deprecated
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, const IOP::Codec::InvalidTypeForEncoding *&);

// TAO_IDL - Generated from
// C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_exception/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, const IOP::Codec::FormatMismatch &); // copying version
TAO_Export void operator<<= (CORBA::Any &, IOP::Codec::FormatMismatch*); // noncopying version
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, IOP::Codec::FormatMismatch *&); // deprecated
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, const IOP::Codec::FormatMismatch *&);

// TAO_IDL - Generated from
// C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_exception/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, const IOP::Codec::TypeMismatch &); // copying version
TAO_Export void operator<<= (CORBA::Any &, IOP::Codec::TypeMismatch*); // noncopying version
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, IOP::Codec::TypeMismatch *&); // deprecated
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, const IOP::Codec::TypeMismatch *&);

// TAO_IDL - Generated from
// C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_structure/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, const IOP::Encoding &); // copying version
TAO_Export void operator<<= (CORBA::Any &, IOP::Encoding*); // noncopying version
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, IOP::Encoding *&); // deprecated
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, const IOP::Encoding *&);

// TAO_IDL - Generated from
// C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, IOP::CodecFactory_ptr); // copying
TAO_Export void operator<<= (CORBA::Any &, IOP::CodecFactory_ptr *); // non-copying
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, IOP::CodecFactory_ptr &);

// TAO_IDL - Generated from
// C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_exception/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, const IOP::CodecFactory::UnknownEncoding &); // copying version
TAO_Export void operator<<= (CORBA::Any &, IOP::CodecFactory::UnknownEncoding*); // noncopying version
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, IOP::CodecFactory::UnknownEncoding *&); // deprecated
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, const IOP::CodecFactory::UnknownEncoding *&);

// TAO_IDL - Generated from
// C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_root/cdr_op.cpp:48

#ifndef __ACE_INLINE__

// TAO_IDL - Generated from
// C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_structure/cdr_op_ch.cpp:54

TAO_Export CORBA::Boolean operator<< (TAO_OutputCDR &, const IOP::Encoding &);
TAO_Export CORBA::Boolean operator>> (TAO_InputCDR &, IOP::Encoding &);

// TAO_IDL - Generated from
// C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_root/cdr_op.cpp:64

#endif /* __ACE_INLINE__ */

// TAO_IDL - Generated from
// C:\work\ACE+TAO\Branch\ACE_wrappers\TAO\TAO_IDL\be\be_codegen.cpp:1016

#if defined (__ACE_INLINE__)
#include "IOP_CodecC.i"
#endif /* defined INLINE */

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma warning(pop)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option pop
#endif /* __BORLANDC__ */

#include "ace/post.h"
#endif /* ifndef */
