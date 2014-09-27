// Copyright (c) 2010 Martin Knafve / hMailServer.com.  
// http://www.hmailserver.com

#pragma once

namespace HM
{

   enum SessionType
   {
      STUnknown = 0,
      STSMTP = 1,
      STSMTPClient = 2,
      STPOP3 = 3,
      STPOP3Client = 4,
      STIMAP = 5,
      STListening = 6,
   };

   enum ConnectionSecurity 
   {
      CSNone     = 0,
      CSSSL      = 1,
      CSSTARTTLSOptional = 2,
      CSSTARTTLSRequired = 3

   };

   enum ConnectionState
   {
      StateDisconnected = 0,
      StateConnected = 1,
      StatePendingDisconnect = 2
   };

}