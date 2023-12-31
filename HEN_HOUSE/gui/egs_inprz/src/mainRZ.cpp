/*
###############################################################################
#
#  EGSnrc egs_inprz main program
#  Copyright (C) 2015 National Research Council Canada
#
#  This file is part of EGSnrc.
#
#  EGSnrc is free software: you can redistribute it and/or modify it under
#  the terms of the GNU Affero General Public License as published by the
#  Free Software Foundation, either version 3 of the License, or (at your
#  option) any later version.
#
#  EGSnrc is distributed in the hope that it will be useful, but WITHOUT ANY
#  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
#  FOR A PARTICULAR PURPOSE.  See the GNU Affero General Public License for
#  more details.
#
#  You should have received a copy of the GNU Affero General Public License
#  along with EGSnrc. If not, see <http://www.gnu.org/licenses/>.
#
###############################################################################
#
#  Author:          Ernesto Mainegra-Hing, 2001
#
#  Contributors:    Blake Walters
#                   Cody Crewson
#
###############################################################################
*/


#include <qapplication.h>
#include "inputRZImpl.h"

int main( int argc, char* argv[] )
{

  QApplication::setStyle("windows");

  QApplication app( argc, argv);

  inputRZImpl* inputRZ = new inputRZImpl(0,"egs_inprz",false,0);

  inputRZ->show();

  if ( argc > 1 )
      inputRZ->SetInpfileName( argv[1]);

  int ret = app.exec();
  return ret;
}
