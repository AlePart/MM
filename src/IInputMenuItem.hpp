
#include <ITextItem.hpp>
template<typename T>
class IInputMenuItem : public ITextItem
{
public:
    virtual void SetData(T data) = 0;
    virtual T GetData() const = 0;
    virtual ~IInputMenuItem() = default;
};