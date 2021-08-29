// Prefer const, enums and inlines to #defines.

// Macros like #define has drawbacks and can give results which are not expected.
// Summary:
//1. For Simple varibales defined by #defined macro use: const or enum
//2. For Function like macros prefer inline function to #defines.


// for a varibale kind of #deifned macro use const safe
#define VALUE 10

// If VALUE were defined in a header file then you'd waste time tracking it down.

// Solution:
const double Value=10;

// One more case when we want value to be used inside a class only then in that case macro is not best option either use enum or const safe variable

class val{
private:
    static const double value;
    
    // or
    enum{
        v=10
    };
    
};
// enum never resulted in unnecessary memory allocation.

// For function defined by macro for that case use the template inline function.


