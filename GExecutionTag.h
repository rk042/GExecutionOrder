#ifndef GExecutionTag_h
#define GExecutionTag_h

#include "core/object/ref_counted.h"

class GExecutionTag : public RefCounted {
	GDCLASS(GExecutionTag, RefCounted);

protected:
	static void _bind_methods();
public:
	GExecutionTag();

	void Wait();
	void Emit();
	void CatchCallBack();
};

#endif //GExecutionTag_h
