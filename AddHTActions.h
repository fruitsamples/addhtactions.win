//////////
//
//	File:		AddHTActions.h
//
//	Contains:	Sample code for adding hypertext links to a QuickTime movie with a text track.
//
//	Written by:	Tim Monroe
//				Based on existing code by Bill Wright
//
//	Copyright:	� 1999 by Apple Computer, Inc., all rights reserved.
//
//	Change History (most recent first):
//
//	   <1>	 	07/19/99	rtm		first file from bw
//	   
//////////


//////////
//
// header files
//
//////////

#ifndef __MACTYPES__
#include <MacTypes.h>
#endif

#ifndef __ENDIAN__
#include <Endian.h>
#endif

#ifndef __MOVIES__
#include <Movies.h>
#endif

#ifndef __MACMEMORY__
#include <MacMemory.h>
#endif

#ifndef _STRING_H
#include <string.h>
#endif

#ifndef __FONTS__
#include <Fonts.h>
#endif

#ifndef __FIXMATH__
#include <FixMath.h>
#endif

#ifndef _STDLIB_H
#include <stdlib.h>
#endif

// Mac-specific header files
#if TARGET_OS_MAC

	#ifndef __NAVIGATION__
	#include <Navigation.h>
	#endif
	
#endif

// Windows-specific header files
#if TARGET_OS_WIN32

	#ifndef __QTML__
	#include <QTML.h>
	#endif
	
	#include <windows.h>
	
#endif


//////////
//
// constants
//
//////////

#define kIDOne						1
#define kIDTwo						2

#define kIndexZero					0
#define kIndexOne					1
#define kZeroDataLength				0

#define kWidth320					320
#define kHeight240					240

#define kTrackVolumeZero			0

#define kTimeScale600				600

#define kTrackStartTimeZero			0
#define kMediaStartTimeZero			0

#define kTextBoxInset				2

#define kSize48						48
#define kFacePlain					0

#define kHyperTextTextAtomType		FOUR_CHAR_CODE('htxt')
#define kTextWiredObjectsAtomType	FOUR_CHAR_CODE('wtxt')
#define kHyperTextItemAtomType		FOUR_CHAR_CODE('htxt')
#define kRangeStart					FOUR_CHAR_CODE('strt')
#define kRangeEnd					FOUR_CHAR_CODE('end ')

// resource ID for string resource containing application's name
#define kAppNameResID				1000
#define kAppNameResIndex			1

// prompt strings for file-put dialog
#define kSavePrompt					"Save Hypertext Movie As:"
#define kSaveFileName				"untitled.mov"


//////////
//
// function prototypes
//
//////////

static OSErr							AddHTAct_CreateTextMovie (FSSpec *theFSSpec);
static OSErr							AddHTAct_CreateHyperTextActionContainer (QTAtomContainer *theActions);
static OSErr							AddHTAct_AddHyperActionsToSample (Handle theSample, QTAtomContainer theActions);
static OSErr							AddHTAct_AddHyperTextToTextMovie (FSSpec *theFSSpec);
static OSErr							AddHTAct_PutFile (ConstStr255Param thePrompt, ConstStr255Param theFileName, FSSpecPtr theFSSpecPtr, Boolean *theIsSelected, Boolean *theIsReplacing);
StringPtr								AddHTAct_ConvertCToPascalString (char *theString);
