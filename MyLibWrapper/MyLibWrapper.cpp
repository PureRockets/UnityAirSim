// This is the main DLL file.

#include "stdafx.h"

#include "MyLibWrapper.h"

#include "MyLib.h"

#include "C:\Users\Jeff\Documents\GitHub\AirSim\AirLib\include\vehicles\multirotor\firmwares\ros_flight\firmware\turbotrig\turbotrig.h"


double MyLibWrapper::Divide(double a, double b)
{
	
	return 0.0;
}

long MyLibWrapper::Myturboasin(long x)
{
	return turboasin(x);

	//return 0;
}