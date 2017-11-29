#pragma once
// ****************************************************************************************************
// ******************************************* MANAGERS_H__ *******************************************
// ****************************************************************************************************
#include "Classes.h"
#include "Company.h"

#include "Console.h"
#include "Supplements.h"
#include "Table.h"
#include "Form.h"

#include <iostream>

namespace Managers {
namespace Aux {
	string writeLogs(ManagerData &data);
	void clear(ManagerData &data);
}

void Navigator(const Page& page);
void Controller11(const Page& page);
void Controller12(const Page& page);
void Controller13(const Page& page);
void Controller14(const Page& page);
void Controller211(const Page& page);
void Controller212(const Page& page);
void Controller213(const Page& page);
void Controller221(const Page& page);
void Controller222(const Page& page);
void Controller231(const Page& page);
void Controller232(const Page& page);
void Controller233(const Page& page);
}