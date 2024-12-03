#pragma mark -
#pragma mark VK_KHR_external_memory_fd extension

VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryFdKHR(
    VkDevice                                    device,
    const VkMemoryGetFdInfoKHR*                pGetFdInfo,
    int*                                       pFd);

VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryFdPropertiesKHR(
    VkDevice                                    device,
    VkExternalMemoryHandleTypeFlagBits         handleType,
    int                                        fd,
    VkMemoryFdPropertiesKHR*                   pMemoryFdProperties);

VKAPI_ATTR VkResult VKAPI_CALL vkImportMemoryFdKHR(
    VkDevice                                    device,
    const VkImportMemoryFdInfoKHR*             pImportFdInfo); 