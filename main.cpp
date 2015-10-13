/*
===========================================================================

SSHConnector
Copyright (C) 2014 Spalt3r Development

This file is part of sshconnector, distributed under the GNU GPL v2
For full terms see the included COPYING file.

===========================================================================
*/

#include "main.h"
#include <stdio.h>

using namespace std;
/***********************************************************************

main

***********************************************************************/

/*
=====================
main
=====================
*/
int main( int argc, char** argv )
{
	auto app = SSHConnector();

	if ( argc > 1 )
	{
		app.SetHostFile( argv[1] );

		if ( argc > 2 )
		{
			app.SetUserHostFile( argv[2] );
		}

		if ( argc > 3 )
		{
			app.SetHelpFile( argv[3] );
		}

		if ( argc > 4 )
		{
			app.SetAWSFilter( argv[4] );
		}
		
		app.Run();
	}
	else
	{
		cout << "Missing configuration files" << endl;
		cout << "Usage: sshconnector hosts.conf userhosts.conf [helpfile.txt]" << endl;
		return 1;
	}
}
