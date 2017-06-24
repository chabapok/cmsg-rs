#include <sys/socket.h>

struct cmsghdr * (CMSG_FIRSTHDR)(struct msghdr *msgh) {
    return CMSG_FIRSTHDR(msgh);
}


struct cmsghdr *(CMSG_NEXTHDR)(struct msghdr *msgh, struct cmsghdr *cmsg){
    return CMSG_NXTHDR(msgh, cmsg);
}


size_t (CMSG_ALIGN)(size_t length){
    return CMSG_ALIGN(length);
}


size_t (CMSG_SPACE)(size_t length){
    return CMSG_SPACE(length);
}


size_t (CMSG_LEN)(size_t length){
    return CMSG_LEN(length);
}


unsigned char *(CMSG_DATA)(struct cmsghdr *cmsg){
    return CMSG_DATA(cmsg);
}
