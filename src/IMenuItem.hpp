#ifndef IMENUITEM_HPP
#define IMENUITEM_HPP

#include <string>
#include <memory>
#include <vector>
class IMenuItem{

public:
   

    virtual std::shared_ptr<IMenuItem> GetParent() const = 0;
    virtual std::shared_ptr<IMenuItem> Next() const = 0;
    virtual std::shared_ptr<IMenuItem> Previous() const = 0;
    virtual void SetNext(std::shared_ptr<IMenuItem> next) = 0;
    virtual void SetPrevious(std::shared_ptr<IMenuItem> prev) = 0;
    virtual ~IMenuItem() = default;
    
};

#endif //IMENUITEM_HPP