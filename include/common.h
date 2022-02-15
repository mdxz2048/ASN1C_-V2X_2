
#ifndef __COMMON_H_
#define __COMMON_H_

#ifdef __cplusplus
extern "C"
{
#endif



/*****************************通用宏定义*****************************/
//返回值定义
#define V2X_SUCCESS   0
#define V2X_FAILURE   -1
#define V2X_TIMEOUT   -2
//位操作
#define V2X_GETBIT(A, B) ((A >> B) & 1)//获取A的第B位的值;
#define V2X_SETBIT(T, B, V) (T = V ? T | (1 << B) : T & ~(1 << B))//设置T的第B位为V(0/1)
//MAX&MIN
#define V2X_MAX(x, y) ({\
        typeof(x) _x = (x); \
        typeof(y) _y = (y); \
        (void)(&_x == &_y); \
        _x > _y ? _x : _y; \
})
#define V2X_MIN(X,Y) ({\
	typeof (X) x_ = (X);\
	typeof (Y) y_ = (Y);\
	(x_ < y_) ? x_ : y_; })


/**
 * @brief V2X设备(应用)状态
 */
enum V2X_DEV_STATUS_T
{
    V2X_DEV_TRUE= 0,
    V2X_DEV_FALSE = -1,
};
/*****************************调试接口*****************************/
#define V2X_DEBUG_PRINTF
#ifdef V2X_DEBUG_PRINTF
#define debug_printf(format, ...) printf("\033[1;32mFile: "__FILE__",Line: %05d: FUNC: %s\t\033[0m" format "\n", __LINE__,__FUNCTION__ ,##__VA_ARGS__)
#else
#define debug_printf
#endif



void printf_struct_value_in_memory(int *address, int len);

#ifdef __cplusplus
}

#endif

#endif