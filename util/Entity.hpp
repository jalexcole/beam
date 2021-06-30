#include "UniqueID.hh"

namespace beam {
    class Entity {
      private:
        static UniqueID uniqueID();

      public:
        Entity();
        virtual void draw();
        virtual void update();
        // int getId();
        ~Entity();
    };
};