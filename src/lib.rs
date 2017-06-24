extern crate libc;

use libc::cmsghdr;
use libc::msghdr;


extern "C" {
    pub fn CMSG_FIRSTHDR(msgh: *const msghdr) -> *const cmsghdr;
    pub fn CMSG_NEXTHDR(msgh: *const msghdr, cmsg: *const cmsghdr) -> *const cmsghdr;
    pub fn CMSG_ALIGN(length: usize) -> usize;
    pub fn CMSG_SPACE(length: usize) -> usize;
    pub fn CMSG_LEN(length: usize) -> usize;
    pub fn CMSG_DATA(msgh: *const cmsghdr) -> *const u8;
}


#[cfg(test)]
mod tests {
//    #[test]
    fn it_works() {
    }
}
