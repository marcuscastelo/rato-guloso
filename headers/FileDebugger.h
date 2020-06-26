#ifndef __FILEDEBUGGER__H__
#define __FILEDEBUGGER__H__

#include "Debugger.h"
#include "FileDebugger.h"

class FileDebugger : public Debugger {
    public:
        FileDebugger(void);
        ~FileDebugger(void);
        void start(void);

    private:
        void importCode(vector<string> commandParts);
};

#endif