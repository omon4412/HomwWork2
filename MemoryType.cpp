#include "MemoryType.hpp"

std::ostream& operator << (std::ostream& out, const MemoryType& mt)
{
   switch(mt) {
      case None: return (out << "Нет");
      case DDR1: return (out << "DDR1");
      case DDR2: return (out << "DDR2");
      case DDR3: return (out << "DDR3");
      case DDR4: return (out << "DDR4");
      case DDR5: return (out << "DDR5");
      case DDR6: return (out << "DDR6");
      case GDDR6: return (out << "GDDR6");
   }
   return (out);
}
