// stdafx.h: Includedatei f�r Standardsystem-Includedateien
// oder h�ufig verwendete projektspezifische Includedateien,
// die nur in unregelm��igen Abst�nden ge�ndert werden.
//

#pragma once

#if defined WIN32
    #define WIN32_LEAN_AND_MEAN             // Selten verwendete Komponenten aus Windows-Headern ausschlie�en
    #include     "targetver.h"
    #include     <windows.h>
    #include     <tchar.h>
    #include     <direct.h>
    #include     <conio.h>
    #include     <stdint.h>

#endif

#include     <stdio.h>
#include     <stdio.h>
#include     <math.h>
#include     <string.h>
#include     <stdlib.h>

#if !defined BYTE 
  typedef unsigned char       BYTE;
#endif

#if !defined uint32_t
  typedef unsigned int       uint32_t ;
#endif 


