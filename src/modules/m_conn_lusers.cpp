/*       +------------------------------------+
 *       | Inspire Internet Relay Chat Daemon |
 *       +------------------------------------+
 *
 *  Inspire is copyright (C) 2002-2004 ChatSpike-Dev.
 *                       E-mail:
 *                <brain@chatspike.net>
 *           	  <Craig@chatspike.net>
 *     
 * Written by Craig Edwards, Craig McLure, and others.
 * This program is free but copyrighted software; see
 *            the file COPYING for details.
 *
 * ---------------------------------------------------
 */

#include "users.h"
#include "channels.h"
#include "modules.h"

/* $ModDesc: Sends the /LUSERS on connect */

// This has to be the simplest module ever.
// The RFC doesnt specify that you should send the /LUSERS numerics
// on connect, but someone asked for it, so its in a module.

class ModuleConnLUSERS : public Module
{
 private:
	 
	 Server *Srv;
 public:
	ModuleConnLUSERS()
	{
		Srv = new Server;
	}
	
	virtual ~ModuleConnLUSERS()
	{
		delete Srv;
	}
	
	virtual Version GetVersion()
	{
		return Version(1,0,0,1,VF_VENDOR);
	}
	
	virtual void OnUserConnect(userrec* user)
	{
		CallCommandHandler("LUSERS", NULL, 0, user);
	}
};


//
// The ModuleConnLUSERSFactory class inherits from ModuleFactory
// and creates a ModuleConnLUSERS object when requested.
//

class ModuleConnLUSERSFactory : public ModuleFactory
{
 public:
	ModuleConnLUSERSFactory()
	{
	}
	
	~ModuleConnLUSERSFactory()
	{
	}
	
	virtual Module * CreateModule()
	{
		return new ModuleConnLUSERS;
	}
	
};


//
// The "C" linkage factory0() function creates the ModuleConnLUSERSFactory
// class for this library
//

extern "C" void * init_module( void )
{
	return new ModuleConnLUSERSFactory;
}

