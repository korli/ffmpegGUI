/*
 * Copyright 2022-2023. All rights reserved.
 * Distributed under the terms of the MIT License.
 *
 * Andi Machovec (BlueSky), andi.machovec@gmail.com, 2022
 * Humdinger, humdingerb@gmail.com, 2022-2023
*/


#ifndef FFGUI_SPINNER_H
#define FFGUI_SPINNER_H

#include "DecimalSpinner.h"
#include "Spinner.h"


class ffguispinner : public BSpinner {
	public:
				ffguispinner(const char* name, const char* label, BMessage* message);
		void 	Increment();
		void 	Decrement();
		void 	SetStep(int32 step);

	private:
		int32 	fStep;
};


class ffguidecspinner : public BDecimalSpinner {
	public:
				ffguidecspinner(const char* name, const char* label, BMessage* message);
		void 	Increment();
		void 	Decrement();
};

#endif // FFGUI_SPINNER_H
