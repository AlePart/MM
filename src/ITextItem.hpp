#include <IMenuItem.hpp>
#include <string>
class ITextItem : public IMenuItem
{
public:
    virtual std::string GetText() const = 0;
    virtual ~ITextItem() = default;
};
