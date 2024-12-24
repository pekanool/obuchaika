#pragma once
namespace aba {
	struct MenuItem {
		const char* const title;
		void (*func)();
	};
}