﻿/*
	Vita Development Suite Libraries
*/

#ifndef _VDSUITE_USER_PAF_WIDGET_W_APPICON_BASE_H
#define _VDSUITE_USER_PAF_WIDGET_W_APPICON_BASE_H

#include <paf/widget/core/widget.h>

namespace paf {

	namespace ui {

		class AppIconBase : public Widget
		{
		public:

			static const char *TypeName();

			AppIconBase(Widget *_parent, CreateParam *_param);

			virtual ~AppIconBase();

			virtual int32_t unkFun_170();
			virtual int32_t unkFun_174();
			virtual int32_t unkFun_178();
			virtual int32_t unkFun_17C();
			virtual int32_t unkFun_180();
			virtual int32_t unkFun_184();

		protected: //0x2D0

			char m_unk_27C[0x54];

			__declspec(dllimport) static const char *m_widget_type;
		};
	}
}

#endif /* _VDSUITE_USER_PAF_WIDGET_W_APPICON_BASE_H */