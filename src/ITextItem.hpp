#ifndef ITEXTITEM_HPP
#define ITEXTITEM_HPP

#include <string>
class ITextItem 
{
public:
    virtual std::string GetText() const = 0;
    virtual ~ITextItem() = default;
};


#endif //ITEXTITEM_HPP