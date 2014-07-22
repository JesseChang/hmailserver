// Copyright (c) 2010 Martin Knafve / hMailServer.com.  
// http://www.hmailserver.com

#pragma once

#include "IMAPCommand.h"

namespace HM
{
   class IMAPConnection;

   class IMAPCommandStartTls : public IMAPCommand  
   {
   public:
      IMAPCommandStartTls();
      virtual ~IMAPCommandStartTls();

      virtual IMAPResult ExecuteCommand(shared_ptr<IMAPConnection> pConnection, shared_ptr<IMAPCommandArgument> pArgument);

   };

}