#include "sai_redis.h"

/**
 * @brief Create Qos Map
 *
 * @param[out] qos_map_id Qos Map Id
 * @param[in] attr_count number of attributes
 * @param[in] attr_list array of attributes
 *
 * @return  SAI_STATUS_SUCCESS on success
 *          Failure status code on error
 */
sai_status_t  redis_create_qos_map(
    _Out_ sai_object_id_t* qos_map_id,
    _In_ uint32_t attr_count,
    _In_ const sai_attribute_t *attr_list)
{
    REDIS_LOG_ENTER();

    REDIS_LOG_EXIT();

    return SAI_STATUS_NOT_IMPLEMENTED;
}

/**
 * @brief Remove Qos Map
 *
 *  @param[in] qos_map_id Qos Map id to be removed.
 *
 *  @return  SAI_STATUS_SUCCESS on success
 *           Failure status code on error
 */
sai_status_t  redis_remove_qos_map (
    _In_  sai_object_id_t   qos_map_id)
{
    REDIS_LOG_ENTER();

    REDIS_LOG_EXIT();

    return SAI_STATUS_NOT_IMPLEMENTED;
}

/**
 * @brief Set attributes for qos map
 *
 * @param[in] qos_map_id Qos Map Id
 * @param[in] attr attribute to set
 *
 * @return  SAI_STATUS_SUCCESS on success
 *          Failure status code on error
 */

sai_status_t  redis_set_qos_map_attribute(
    _In_ sai_object_id_t  qos_map_id,
    _In_ const sai_attribute_t *attr)
{
    REDIS_LOG_ENTER();

    REDIS_LOG_EXIT();

    return SAI_STATUS_NOT_IMPLEMENTED;
}

/**
 * @brief  Get attrbutes of qos map
 *
 * @param[in] qos_map_id  map id
 * @param[in] attr_count  number of attributes
 * @param[inout] attr_list  array of attributes
 *
 * @return SAI_STATUS_SUCCESS on success
 *        Failure status code on error
 */


sai_status_t  redis_get_qos_map_attribute(
     _In_ sai_object_id_t   qos_map_id ,
     _In_ uint32_t attr_count,
     _Inout_ sai_attribute_t *attr_list)
{
    REDIS_LOG_ENTER();

    REDIS_LOG_EXIT();

    return SAI_STATUS_NOT_IMPLEMENTED;
}

/**
 *  Qos Map methods table retrieved with sai_api_query()
 */
const sai_qos_map_api_t redis_qios_map_api = {
    redis_create_qos_map,
    redis_remove_qos_map,
    redis_set_qos_map_attribute,
    redis_get_qos_map_attribute,
};
