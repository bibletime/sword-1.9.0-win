/******************************************************************************
 *
 * utf16utf8.h -	class UTF16UTF8: an EncodingFilter to convert
 * 			UTF16 to UTF8
 *
 * $Id: utf16utf8.h 3786 2020-08-30 11:35:14Z scribe $
 *
 * Copyright 2001-2013 CrossWire Bible Society (http://www.crosswire.org)
 *	CrossWire Bible Society
 *	P. O. Box 2528
 *	Tempe, AZ  85280-2528
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation version 2.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 */

#ifndef UTF16UTF8_H
#define UTF16UTF8_H

#include <swfilter.h>

SWORD_NAMESPACE_START

/** This filter converts UTF-16 encoded text to UTF-8
 */
class SWDLLEXPORT UTF16UTF8 : public SWFilter {
public:
	UTF16UTF8();
	virtual char processText(SWBuf &text, const SWKey *key = 0, const SWModule *module = 0);
};

SWORD_NAMESPACE_END
#endif
