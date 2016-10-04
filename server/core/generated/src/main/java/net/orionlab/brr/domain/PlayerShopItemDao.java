// license-header java merge-point
//
// Attention: Generated code! Do not modify by hand!
// Generated by: SpringDao.vsl in andromda-spring-cartridge.
//
package net.orionlab.brr.domain;

import java.util.Collection;
import java.util.Date;
import java.util.Set;
import net.orionlab.brr.Search;
import org.andromda.spring.PaginationResult;

/**
 *
 * @see PlayerShopItem
 */
public interface PlayerShopItemDao
{
    /**
     * This constant is used as a transformation flag; entities can be converted automatically into value objects
     * or other types, different methods in a class implementing this interface support this feature: look for
     * an <code>int</code> parameter called <code>transform</code>.
     * <p>
     * This specific flag denotes no transformation will occur.
     */
    public static final int TRANSFORM_NONE = 0;


    /**
     * Transforms the given results to a collection of {@link PlayerShopItem}
     * instances (this is useful when the returned results contains a row of data and you want just entities only).
     *
     * @param results the query results.
     */
    public void toEntities(final Collection<?> results);

    /**
     * Gets an instance of PlayerShopItem from the persistent store.
     * @param id
     * @return PlayerShopItem
     */
    public PlayerShopItem get(Long id);

    /**
     * <p>
     * Does the same thing as {@link #get(Long)} with an
     * additional flag called <code>transform</code>. If this flag is set to <code>TRANSFORM_NONE</code> then
     * the returned entity will <strong>NOT</strong> be transformed. If this flag is any of the other constants
     * defined in this class then the result <strong>WILL BE</strong> passed through an operation which can
     * optionally transform the entity (into a value object for example). By default, transformation does
     * not occur.
     * </p>
     *
     * @param transform flag to determine transformation type.
     * @param id the identifier of the entity to get.
     * @return either the entity or the object transformed from the entity.
     */
    public Object get(int transform, Long id);

    /**
     * Loads an instance of PlayerShopItem from the persistent store.
     * @param id
     * @return PlayerShopItem
     */
    public PlayerShopItem load(Long id);

    /**
     * <p>
     * Does the same thing as {@link #load(Long)} with an
     * additional flag called <code>transform</code>. If this flag is set to <code>TRANSFORM_NONE</code> then
     * the returned entity will <strong>NOT</strong> be transformed. If this flag is any of the other constants
     * defined in this class then the result <strong>WILL BE</strong> passed through an operation which can
     * optionally transform the entity (into a value object for example). By default, transformation does
     * not occur.
     * </p>
     *
     * @param transform flag to determine transformation type.
     * @param id the identifier of the entity to load.
     * @return either the entity or the object transformed from the entity.
     */
    public Object load(int transform, Long id);

    /**
     * Loads all entities of type {@link PlayerShopItem}.
     *
     * @return the loaded entities.
     */
    public Collection<PlayerShopItem> loadAll();

    /**
     * <p>
     * Does the same thing as {@link #loadAll()} with an
     * additional flag called <code>transform</code>. If this flag is set to <code>TRANSFORM_NONE</code> then
     * the returned entity will <strong>NOT</strong> be transformed. If this flag is any of the other constants
     * defined here then the result <strong>WILL BE</strong> passed through an operation which can optionally
     * transform the entity (into a value object for example). By default, transformation does
     * not occur.
     * </p>
     *
     * @param transform the flag indicating what transformation to use.
     * @return the loaded entities.
     */
    public Collection<?> loadAll(final int transform);

    /**
     * <p>
     * Does the same thing as {@link #loadAll()} with an
     * additional two arguments called <code>pageNumber</code> and <code>pageSize</code>. The <code>pageNumber</code>
     * argument allows you to specify the page number when you are paging the results and the pageSize allows you to specify the size of the
     * page retrieved.
     * </p>
     *
     * @param pageNumber the page number to retrieve when paging results.
     * @param pageSize the size of the page to retrieve when paging results.
     * @return the loaded entities.
     */
    public Collection<?> loadAll(final int pageNumber, final int pageSize);

    /**
     * <p>
     * Does the same thing as {@link #loadAll(int)} with an
     * additional two arguments called <code>pageNumber</code> and <code>pageSize</code>. The <code>pageNumber</code>
     * argument allows you to specify the page number when you are paging the results and the pageSize allows you to specify the size of the
     * page retrieved.
     * </p>
     *
     * @param transform the flag indicating what transformation to use.
     * @param pageNumber the page number to retrieve when paging results.
     * @param pageSize the size of the page to retrieve when paging results.
     * @return the loaded entities.
     */
    public Collection<?> loadAll(final int transform, final int pageNumber, final int pageSize);

    /**
     * Creates an instance of PlayerShopItem and adds it to the persistent store.
     * @param playerShopItem
     * @return PlayerShopItem
     */
    public PlayerShopItem create(PlayerShopItem playerShopItem);

    /**
     * <p>
     * Does the same thing as {@link #create(PlayerShopItem)} with an
     * additional flag called <code>transform</code>. If this flag is set to <code>TRANSFORM_NONE</code> then
     * the returned entity will <strong>NOT</strong> be transformed. If this flag is any of the other constants
     * defined here then the result <strong>WILL BE</strong> passed through an operation which can optionally
     * transform the entity (into a value object for example). By default, transformation does
     * not occur.
     * </p>
     * @param transform
     * @param playerShopItem
     * @return Object
     */
    public Object create(int transform, PlayerShopItem playerShopItem);

    /**
     * Creates a new instance of PlayerShopItem and adds
     * from the passed in <code>entities</code> collection
     *
     * @param entities the collection of PlayerShopItem
     * instances to create.
     *
     * @return the created instances.
     */
    public Collection<PlayerShopItem> create(Collection<PlayerShopItem> entities);

    /**
     * <p>
     * Does the same thing as {@link #create(PlayerShopItem)} with an
     * additional flag called <code>transform</code>. If this flag is set to <code>TRANSFORM_NONE</code> then
     * the returned entity will <strong>NOT</strong> be transformed. If this flag is any of the other constants
     * defined here then the result <strong>WILL BE</strong> passed through an operation which can optionally
     * transform the entities (into value objects for example). By default, transformation does
     * not occur.
     * </p>
     * @param transform
     * @param entities
     * @return Collection
     */
    public Collection<?> create(int transform, Collection<PlayerShopItem> entities);

    /**
     * <p>
     * Creates a new <code>PlayerShopItem</code>
     * instance from <strong>all</strong> attributes and adds it to
     * the persistent store.
     * </p>
     * @param dateCreate 
     * @param dateEdit 
     * @param isArchived 
     * @return PlayerShopItem
     */
    public PlayerShopItem create(
        Date dateCreate,
        Date dateEdit,
        Boolean isArchived);

    /**
     * <p>
     * Does the same thing as {@link #create(Date, Date, Boolean)} with an
     * additional flag called <code>transform</code>. If this flag is set to <code>TRANSFORM_NONE</code> then
     * the returned entity will <strong>NOT</strong> be transformed. If this flag is any of the other constants
     * defined here then the result <strong>WILL BE</strong> passed through an operation which can optionally
     * transform the entity (into a value object for example). By default, transformation does
     * not occur.
     * </p>
     * @param transform
     * @param dateCreate 
     * @param dateEdit 
     * @param isArchived 
     * @return PlayerShopItem
     */
    public Object create(
        int transform,
        Date dateCreate,
        Date dateEdit,
        Boolean isArchived);

    /**
     * <p>
     * Creates a new <code>PlayerShopItem</code>
     * instance from only <strong>required</strong> properties (attributes
     * and association ends) and adds it to the persistent store.
     * </p>
     * @param dateCreate
     * @param player
     * @param shopItem
     * @return PlayerShopItem
     */
    public PlayerShopItem create(
        Date dateCreate,
        Player player,
        ShopItem shopItem);

    /**
     * <p>
     * Does the same thing as {@link #create(Date)} with an
     * additional flag called <code>transform</code>. If this flag is set to <code>TRANSFORM_NONE</code> then
     * the returned entity will <strong>NOT</strong> be transformed. If this flag is any of the other constants
     * defined here then the result <strong>WILL BE</strong> passed through an operation which can optionally
     * transform the entity (into a value object for example). By default, transformation does
     * not occur.
     * </p>
     * @param transform flag to determine transformation type.
     * @param dateCreate
     * @param player
     * @param shopItem
     * @return Object
     */
    public Object create(
        int transform,
        Date dateCreate,
        Player player,
        ShopItem shopItem);

    /**
     * Updates the <code>playerShopItem</code> instance in the persistent store.
     * @param playerShopItem
     */
    public void update(PlayerShopItem playerShopItem);

    /**
     * Updates all instances in the <code>entities</code> collection in the persistent store.
     * @param entities
     */
    public void update(Collection<PlayerShopItem> entities);

    /**
     * Removes the instance of PlayerShopItem from the persistent store.
     * @param playerShopItem
     */
    public void remove(PlayerShopItem playerShopItem);

    /**
     * Removes the instance of PlayerShopItem having the given
     * <code>identifier</code> from the persistent store.
     * @param id
     */
    public void remove(Long id);

    /**
     * Removes all entities in the given <code>entities</code> collection.
     * @param entities
     */
    public void remove(Collection<PlayerShopItem> entities);


    /**
     * Does the same thing as {@link #search(int, Search)} but with an
     * additional two flags called <code>pageNumber</code> and <code>pageSize</code>. These flags allow you to
     * limit your data to a specified page number and size.
     *
     * @param transform the transformation flag.
     * @param pageNumber the page number in the data to retrieve
     * @param pageSize the size of the page to retrieve.
     * @param search the search object which provides the search parameters and pagination specification.
     * @return any found results from the search wrapped in a {@link PaginationResult} instance.
     */
    public PaginationResult search(final int transform, final int pageNumber, final int pageSize, final Search search);

    /**
     * Does the same thing as {@link #search(Search)} but with an
     * additional two flags called <code>pageNumber</code> and <code>pageSize</code>. These flags allow you to
     * limit your data to a specified page number and size.
     *
     * @param pageNumber the page number in the data to retrieve
     * @param pageSize the size of the page to retrieve.
     * @param search the search object which provides the search parameters and pagination specification.
     * @return any found results from the search wrapped in a {@link PaginationResult} instance.
     */
    public PaginationResult search(final int pageNumber, final int pageSize, final Search search);

    /**
     * Does the same thing as {@link #search(Search)} but with an
     * additional flag called <code>transform</code>. If this flag is set to <code>TRANSFORM_NONE</code> then
     * finder results will <strong>NOT</strong> be transformed during retrieval.
     * If this flag is any of the other constants defined here
     * then results <strong>WILL BE</strong> passed through an operation which can optionally
     * transform the entities (into value objects for example). By default, transformation does
     * not occur.
     *
     * @param transform the transformation flag.
     * @param search the search object which provides the search parameters and pagination specification.
     * @return any found results from the search.
     */
    public Set<?> search(final int transform, final Search search);

    /**
     * Performs a search using the parameters specified in the given <code>search</code> object.
     *
     * @param search the search object which provides the search parameters and pagination specification.
     * @return any found results from the search.
     */
    public Set<PlayerShopItem> search(final Search search);

    /**
     * Allows transformation of entities into value objects
     * (or something else for that matter), when the <code>transform</code>
     * flag is set to one of the constants defined in <code>net.orionlab.brr.domain.PlayerShopItemDao</code>, please note
     * that the {@link #TRANSFORM_NONE} constant denotes no transformation, so the entity itself
     * will be returned.
     *
     * If the integer argument value is unknown {@link #TRANSFORM_NONE} is assumed.
     *
     * @param transform one of the constants declared in {@link net.orionlab.brr.domain.PlayerShopItemDao}
     * @param entity an entity that was found
     * @return the transformed entity (i.e. new value object, etc)
     * @see #transformEntities(int,Collection)
     */
    public Object transformEntity(final int transform, final PlayerShopItem entity);

    /**
     * Transforms a collection of entities using the
     * {@link #transformEntity(int,PlayerShopItem)}
     * method. This method does not instantiate a new collection.
     * <p>
     * This method is to be used internally only.
     *
     * @param transform one of the constants declared in <code>net.orionlab.brr.domain.PlayerShopItemDao</code>
     * @param entities the collection of entities to transform
     * @see #transformEntity(int,PlayerShopItem)
     */
    public void transformEntities(final int transform, final Collection<?> entities);

    // spring-dao merge-point
}