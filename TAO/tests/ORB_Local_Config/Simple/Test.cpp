// $Id$

/// It's a test - we need ACE_ASSERT
#ifdef ACE_NDEBUG
#  undef ACE_NDEBUG
#endif

#include "tao/CORBANAME_Parser.h"
#include "tao/CORBALOC_Parser.h"
#include "tao/Protocol_Factory.h"
#include "ace/Dynamic_Service.h"

#include "Service_Configuration_Per_ORB.h"


// @brief Dynamic services loading

int
ACE_TMAIN (int, ACE_TCHAR *[])
{
  ACE_Service_Gestalt_Test one; // Use the ACE_Service_Repository::instance ()

  one.process_directive (ace_svc_desc_TAO_CORBANAME_Parser);
  one.process_directive (ace_svc_desc_TAO_CORBALOC_Parser);

  TAO_Protocol_Factory* p1 =
    ACE_Dynamic_Service<TAO_Protocol_Factory>::instance (&one, "IIOP_Factory");

  ACE_ASSERT ((p1 == 0));

  ACE_Service_Object* p2 =
    ACE_Dynamic_Service<ACE_Service_Object>::instance (&one, "CORBANAME_Parser");

  ACE_ASSERT ((p2 != 0));

  ACE_Service_Object* p3 =
    ACE_Dynamic_Service<ACE_Service_Object>::instance (&one, "CORBALOC_Parser");

  ACE_ASSERT ((p3 != 0));

  return 0;
}
