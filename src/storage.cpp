#include "storage.h"

namespace Storage {

    static PIDValues pid;

    void init() {}

    PIDValues loadPID() {
        return pid;
    }

    void savePID(PIDValues values) {
        pid = values;
    }

}