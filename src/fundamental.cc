#include <node.h>

void Sum(const v8::FunctionCallbackInfo<v8::Value>& args){
    
    // initialize
    v8::Isolate* isolate = args.GetIsolate();
    


    int i;
    double a = 3.1423456, b = 3.12222323232;

    for(i = 0; i < 10000000; i++){
        a +=b;
    }   

    auto total = v8::Number::New(isolate, a);
    args.GetReturnValue().Set(total);
}


// initialize module

void Initialize(v8::Local<v8::Object> exports){
    NODE_SET_METHOD(exports, "sum", Sum);
}

NODE_MODULE(NODE_GYP_MODULE_NAME, Initialize);