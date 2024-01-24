#include <string>
#include <memory>
#include <vector>
class IMenuItem{

public:
   

    virtual std::shared_ptr<IMenuItem> GetParent() const = 0;
    virtual std::shared_ptr<IMenuItem> Next() const = 0;
    virtual std::shared_ptr<IMenuItem> Previous() const = 0;
    virtual void SetLeft(std::shared_ptr<IMenuItem> left) = 0;
    virtual void SetRight(std::shared_ptr<IMenuItem> right) = 0;
    virtual ~IMenuItem() = default;
    
};