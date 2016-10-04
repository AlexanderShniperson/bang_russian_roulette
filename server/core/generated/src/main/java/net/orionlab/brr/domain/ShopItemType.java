// license-header java merge-point
//
// Attention: Generated code! Do not modify by hand!
// Generated by: TypeSafeEnumeration.vsl in andromda-java-cartridge.
// Model Class:  AndroMDAModel::net.orionlab.brr::domain::ShopItemType
// Metafacade:   org.andromda.metafacades.uml.Enumeration
// Stereotype:  Enumeration
//
package net.orionlab.brr.domain;

import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

/**
 * 
 */
public enum ShopItemType
{
    /** TODO: Model Documentation for Enumeration Literal PISTOL value "PISTOL" */
    PISTOL("PISTOL"),
    /** TODO: Model Documentation for Enumeration Literal BULLET value "BULLET" */
    BULLET("BULLET"),
    /** TODO: Model Documentation for Enumeration Literal HELMET value "HELMET" */
    HELMET("HELMET"),
    /** TODO: Model Documentation for Enumeration Literal MONEY value "MONEY" */
    MONEY("MONEY"),
    /** TODO: Model Documentation for Enumeration Literal SHOOTDIRECTION value "SHOOTDIRECTION" */
    SHOOTDIRECTION("SHOOTDIRECTION"),
    /** TODO: Model Documentation for Enumeration Literal VIDEOAD value "VIDEOAD" */
    VIDEOAD("VIDEOAD");

    /**
     * The serial version UID of this class. Needed for serialization.
     */
    private static final long serialVersionUID = 3294634465758358852L;

    private final String enumValue;

    /**
     * The constructor with enumeration literal value allowing
     * super classes to access it.
     */
    private ShopItemType(String value)
    {
        this.enumValue = value;
    }

    /*
     * Do not override this method directly. Use an alternate name
     * if providing a different toString implementation
     * @see Object#toString()
    @Override
    public String toString()
    {
        return String.valueOf(this.enumValue);
    }
     */

    /**
     * Retrieves an instance of ShopItemType from <code>its name</code>.
     *
     * @param name the name to create the ShopItemType from.
     * @return The enumeration literal named after the 'name' argument
     */
    public static ShopItemType fromString(String name)
    {
        return ShopItemType.valueOf(name);
    }

    /**
     * Returns an enumeration literal String <code>value</code>.
     * Required by JAXB2 enumeration implementation
     *
     * @return String with corresponding value
     */
    public String value()
    {
        return this.enumValue;
    }

    /**
     * Returns an instance of ShopItemType from String <code>value</code>.
     * Required by JAXB2 enumeration implementation
     *
     * @param value the value to create the ShopItemType from.
     * @return static Enumeration with corresponding value
     */
    public static ShopItemType fromValue(String value)
    {
        for (ShopItemType enumName: ShopItemType.values())
        {
            if (enumName.getValue().equals(value))
            {
                return enumName;
            }
        }
        throw new IllegalArgumentException("ShopItemType.fromValue(" + value + ')');
    }

    /**
     * Gets the underlying value of this type safe enumeration.
     * This method is necessary to comply with DaoBase implementation.
     * @return The name of this literal.
     */
    public String getValue()
    {
        return this.enumValue;
    }

    /**
     * Returns an unmodifiable list containing the literals that are known by this enumeration.
     *
     * @return A List containing the actual literals defined by this enumeration, this list
     *         can not be modified.
     */
    public static List<String> literals()
    {
        return ShopItemType.literals;
    }

    /**
     * Returns an unmodifiable list containing the names of the literals that are known
     * by this enumeration.
     *
     * @return A List containing the actual names of the literals defined by this
     *         enumeration, this list can not be modified.
     */
    public static List<String> names()
    {
        return ShopItemType.names;
    }

    private static Map<String, ShopItemType> values = new LinkedHashMap<String, ShopItemType>(6, 1);
    private static List<String> literals = new ArrayList<String>(6);
    private static List<String> names = new ArrayList<String>(6);
    private static List<ShopItemType> valueList = new ArrayList<ShopItemType>(6);

    /**
     * Initializes the values.
     */
    static
    {
        synchronized (ShopItemType.values)
        {
            ShopItemType.values.put(PISTOL.enumValue, PISTOL);
            ShopItemType.values.put(BULLET.enumValue, BULLET);
            ShopItemType.values.put(HELMET.enumValue, HELMET);
            ShopItemType.values.put(MONEY.enumValue, MONEY);
            ShopItemType.values.put(SHOOTDIRECTION.enumValue, SHOOTDIRECTION);
            ShopItemType.values.put(VIDEOAD.enumValue, VIDEOAD);
        }
        synchronized (ShopItemType.valueList)
        {
            ShopItemType.valueList.add(PISTOL);
            ShopItemType.valueList.add(BULLET);
            ShopItemType.valueList.add(HELMET);
            ShopItemType.valueList.add(MONEY);
            ShopItemType.valueList.add(SHOOTDIRECTION);
            ShopItemType.valueList.add(VIDEOAD);
            ShopItemType.valueList = Collections.unmodifiableList(valueList);
        }
        synchronized (ShopItemType.literals)
        {
            ShopItemType.literals.add(PISTOL.enumValue);
            ShopItemType.literals.add(BULLET.enumValue);
            ShopItemType.literals.add(HELMET.enumValue);
            ShopItemType.literals.add(MONEY.enumValue);
            ShopItemType.literals.add(SHOOTDIRECTION.enumValue);
            ShopItemType.literals.add(VIDEOAD.enumValue);
            ShopItemType.literals = Collections.unmodifiableList(literals);
        }
        synchronized (ShopItemType.names)
        {
            ShopItemType.names.add("PISTOL");
            ShopItemType.names.add("BULLET");
            ShopItemType.names.add("HELMET");
            ShopItemType.names.add("MONEY");
            ShopItemType.names.add("SHOOTDIRECTION");
            ShopItemType.names.add("VIDEOAD");
            ShopItemType.names = Collections.unmodifiableList(names);
        }
    }
    // type-safe-enumeration-object java merge-point
}