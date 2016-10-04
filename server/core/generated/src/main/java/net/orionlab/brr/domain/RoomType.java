// license-header java merge-point
//
// Attention: Generated code! Do not modify by hand!
// Generated by: TypeSafeEnumeration.vsl in andromda-java-cartridge.
// Model Class:  AndroMDAModel::net.orionlab.brr::domain::RoomType
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
public enum RoomType
{
    /** TODO: Model Documentation for Enumeration Literal TINY value "TINY" */
    TINY("TINY"),
    /** TODO: Model Documentation for Enumeration Literal SMALL value "SMALL" */
    SMALL("SMALL"),
    /** TODO: Model Documentation for Enumeration Literal BIG value "BIG" */
    BIG("BIG"),
    /** TODO: Model Documentation for Enumeration Literal MEDIUM value "MEDIUM" */
    MEDIUM("MEDIUM");

    /**
     * The serial version UID of this class. Needed for serialization.
     */
    private static final long serialVersionUID = -2690979552648463968L;

    private final String enumValue;

    /**
     * The constructor with enumeration literal value allowing
     * super classes to access it.
     */
    private RoomType(String value)
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
     * Retrieves an instance of RoomType from <code>its name</code>.
     *
     * @param name the name to create the RoomType from.
     * @return The enumeration literal named after the 'name' argument
     */
    public static RoomType fromString(String name)
    {
        return RoomType.valueOf(name);
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
     * Returns an instance of RoomType from String <code>value</code>.
     * Required by JAXB2 enumeration implementation
     *
     * @param value the value to create the RoomType from.
     * @return static Enumeration with corresponding value
     */
    public static RoomType fromValue(String value)
    {
        for (RoomType enumName: RoomType.values())
        {
            if (enumName.getValue().equals(value))
            {
                return enumName;
            }
        }
        throw new IllegalArgumentException("RoomType.fromValue(" + value + ')');
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
        return RoomType.literals;
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
        return RoomType.names;
    }

    private static Map<String, RoomType> values = new LinkedHashMap<String, RoomType>(4, 1);
    private static List<String> literals = new ArrayList<String>(4);
    private static List<String> names = new ArrayList<String>(4);
    private static List<RoomType> valueList = new ArrayList<RoomType>(4);

    /**
     * Initializes the values.
     */
    static
    {
        synchronized (RoomType.values)
        {
            RoomType.values.put(TINY.enumValue, TINY);
            RoomType.values.put(SMALL.enumValue, SMALL);
            RoomType.values.put(BIG.enumValue, BIG);
            RoomType.values.put(MEDIUM.enumValue, MEDIUM);
        }
        synchronized (RoomType.valueList)
        {
            RoomType.valueList.add(TINY);
            RoomType.valueList.add(SMALL);
            RoomType.valueList.add(BIG);
            RoomType.valueList.add(MEDIUM);
            RoomType.valueList = Collections.unmodifiableList(valueList);
        }
        synchronized (RoomType.literals)
        {
            RoomType.literals.add(TINY.enumValue);
            RoomType.literals.add(SMALL.enumValue);
            RoomType.literals.add(BIG.enumValue);
            RoomType.literals.add(MEDIUM.enumValue);
            RoomType.literals = Collections.unmodifiableList(literals);
        }
        synchronized (RoomType.names)
        {
            RoomType.names.add("TINY");
            RoomType.names.add("SMALL");
            RoomType.names.add("BIG");
            RoomType.names.add("MEDIUM");
            RoomType.names = Collections.unmodifiableList(names);
        }
    }
    // type-safe-enumeration-object java merge-point
}