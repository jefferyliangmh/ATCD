// $Id$

#include "tao/IIOP_Factory.h"
#include "tao/IIOP_Acceptor.h"
#include "tao/IIOP_Connector.h"
#include "ace/Dynamic_Service.h"

ACE_RCSID(tao, IIOP_Factory, "$Id$")


TAO_IIOP_Protocol_Factory::TAO_IIOP_Protocol_Factory (void)
{
}

TAO_IIOP_Protocol_Factory::~TAO_IIOP_Protocol_Factory (void)
{
}

int
TAO_IIOP_Protocol_Factory::match_prefix (const ACE_CString &prefix)
{
  const ACE_CString this_prefix ("iiop");

  return prefix == this_prefix;
}

TAO_Acceptor *
TAO_IIOP_Protocol_Factory::make_acceptor (void)
{
  TAO_Acceptor *acceptor = 0;

  ACE_NEW_RETURN (acceptor,
                  TAO_IIOP_Acceptor,
                  0);

  return acceptor;
}

int
TAO_IIOP_Protocol_Factory::init (int argc, char* argv[])
{
  return 0;
}

TAO_Connector *
TAO_IIOP_Protocol_Factory::make_connector (void)
{
  TAO_Connector *connector = 0;

  ACE_NEW_RETURN (connector,
                  TAO_IIOP_Connector,
                  0);
  return connector;
}

ACE_STATIC_SVC_DEFINE (TAO_IIOP_Protocol_Factory,
                       ASYS_TEXT ("IIOP_Factory"),
                       ACE_SVC_OBJ_T,
                       &ACE_SVC_NAME (TAO_IIOP_Protocol_Factory),
                       ACE_Service_Type::DELETE_THIS |
                                  ACE_Service_Type::DELETE_OBJ,
                       0)

ACE_FACTORY_DEFINE (TAO, TAO_IIOP_Protocol_Factory)
