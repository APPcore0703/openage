#include "misc.h"

#include <stdlib.h>

namespace engine {
namespace util {

int random_range(int lower, int upper) {
	return (rand() % (upper - lower)) + lower;
}

} //namespace util
} //namespace engine
