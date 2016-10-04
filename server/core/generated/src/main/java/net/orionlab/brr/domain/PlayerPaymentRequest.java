// license-header java merge-point
//
// Attention: Generated code! Do not modify by hand!
// Generated by: hibernate/HibernateEntity.vsl in andromda-hibernate-cartridge.
//
package net.orionlab.brr.domain;

import java.io.Serializable;
import java.util.Date;

/**
 * 
 */
// HibernateEntity.vsl annotations merge-point
public abstract class PlayerPaymentRequest
    implements Serializable, Comparable<PlayerPaymentRequest>
{
    /**
     * The serial version UID of this class. Needed for serialization.
     */
    private static final long serialVersionUID = 2943009099711132156L;

    // Generate 8 attributes
    private String itemName;

    /**
     * 
     * @return this.itemName String
     */
    public String getItemName()
    {
        return this.itemName;
    }

    /**
     * 
     * @param itemNameIn String
     */
    public void setItemName(String itemNameIn)
    {
        this.itemName = itemNameIn;
    }

    private byte[] receipt;

    /**
     * 
     * @return this.receipt byte[]
     */
    public byte[] getReceipt()
    {
        return this.receipt;
    }

    /**
     * 
     * @param receiptIn byte[]
     */
    public void setReceipt(byte[] receiptIn)
    {
        this.receipt = receiptIn;
    }

    private MarketType marketType;

    /**
     * 
     * @return this.marketType MarketType
     */
    public MarketType getMarketType()
    {
        return this.marketType;
    }

    /**
     * 
     * @param marketTypeIn MarketType
     */
    public void setMarketType(MarketType marketTypeIn)
    {
        this.marketType = marketTypeIn;
    }

    private PaymentRequestStatus approveStatus;

    /**
     * 
     * @return this.approveStatus PaymentRequestStatus
     */
    public PaymentRequestStatus getApproveStatus()
    {
        return this.approveStatus;
    }

    /**
     * 
     * @param approveStatusIn PaymentRequestStatus
     */
    public void setApproveStatus(PaymentRequestStatus approveStatusIn)
    {
        this.approveStatus = approveStatusIn;
    }

    private Date dateCreate;

    /**
     * 
     * @return this.dateCreate Date
     */
    public Date getDateCreate()
    {
        return this.dateCreate;
    }

    /**
     * 
     * @param dateCreateIn Date
     */
    public void setDateCreate(Date dateCreateIn)
    {
        this.dateCreate = dateCreateIn;
    }

    private Date dateEdit;

    /**
     * 
     * @return this.dateEdit Date
     */
    public Date getDateEdit()
    {
        return this.dateEdit;
    }

    /**
     * 
     * @param dateEditIn Date
     */
    public void setDateEdit(Date dateEditIn)
    {
        this.dateEdit = dateEditIn;
    }

    private Boolean isArchived = Boolean.valueOf(false);

    /**
     * 
     * @return this.isArchived Boolean
     */
    public Boolean getIsArchived()
    {
        return this.isArchived;
    }

    /**
     * 
     * @param isArchivedIn Boolean
     */
    public void setIsArchived(Boolean isArchivedIn)
    {
        this.isArchived = isArchivedIn;
    }

    private Long id;

    /**
     * 
     * @return this.id Long
     */
    public Long getId()
    {
        return this.id;
    }

    /**
     * 
     * @param idIn Long
     */
    public void setId(Long idIn)
    {
        this.id = idIn;
    }

    // Generate 1 associations
    private Player player;

    /**
     * 
     * @return this.player Player
     */
    public Player getPlayer()
    {
        return this.player;
    }

    /**
     * 
     * @param playerIn Player
     */
    public void setPlayer(Player playerIn)
    {
        this.player = playerIn;
    }

    /**
     * Returns <code>true</code> if the argument is an PlayerPaymentRequest instance and all identifiers for this entity
     * equal the identifiers of the argument entity. Returns <code>false</code> otherwise.
     */
    @Override
    public boolean equals(Object object)
    {
        if (this == object)
        {
            return true;
        }
        if (!(object instanceof PlayerPaymentRequest))
        {
            return false;
        }
        final PlayerPaymentRequest that = (PlayerPaymentRequest)object;
        if (this.id == null || that.getId() == null || !this.id.equals(that.getId()))
        {
            return false;
        }
        return true;
    }

    /**
     * Returns a hash code based on this entity's identifiers.
     */
    @Override
    public int hashCode()
    {
        int hashCode = 0;
        hashCode = 29 * hashCode + (this.id == null ? 0 : this.id.hashCode());

        return hashCode;
    }

    /**
     * Constructs new instances of {@link PlayerPaymentRequest}.
     */
    public static final class Factory
    {
        /**
         * Constructs a new instance of {@link PlayerPaymentRequest}.
         * @return new PlayerPaymentRequestImpl()
         */
        public static PlayerPaymentRequest newInstance()
        {
            return new PlayerPaymentRequestImpl();
        }

        /**
         * Constructs a new instance of {@link PlayerPaymentRequest}, taking all required and/or
         * read-only properties as arguments, except for identifiers.
         * @param itemName String
         * @param receipt byte[]
         * @param marketType MarketType
         * @param approveStatus PaymentRequestStatus
         * @param dateCreate Date
         * @param player Player
         * @return newInstance
         */
        public static PlayerPaymentRequest newInstance(String itemName, byte[] receipt, MarketType marketType, PaymentRequestStatus approveStatus, Date dateCreate, Player player)
        {
            final PlayerPaymentRequest entity = new PlayerPaymentRequestImpl();
            entity.setItemName(itemName);
            entity.setReceipt(receipt);
            entity.setMarketType(marketType);
            entity.setApproveStatus(approveStatus);
            entity.setDateCreate(dateCreate);
            entity.setPlayer(player);
            return entity;
        }

        /**
         * Constructs a new instance of {@link PlayerPaymentRequest}, taking all possible properties
         * (except the identifier(s))as arguments.
         * @param itemName String
         * @param receipt byte[]
         * @param marketType MarketType
         * @param approveStatus PaymentRequestStatus
         * @param dateCreate Date
         * @param dateEdit Date
         * @param isArchived Boolean
         * @param player Player
         * @return newInstance PlayerPaymentRequest
         */
        public static PlayerPaymentRequest newInstance(String itemName, byte[] receipt, MarketType marketType, PaymentRequestStatus approveStatus, Date dateCreate, Date dateEdit, Boolean isArchived, Player player)
        {
            final PlayerPaymentRequest entity = new PlayerPaymentRequestImpl();
            entity.setItemName(itemName);
            entity.setReceipt(receipt);
            entity.setMarketType(marketType);
            entity.setApproveStatus(approveStatus);
            entity.setDateCreate(dateCreate);
            entity.setDateEdit(dateEdit);
            entity.setIsArchived(isArchived);
            entity.setPlayer(player);
            return entity;
        }
    }

    /**
     * @see Comparable#compareTo
     */
    public int compareTo(PlayerPaymentRequest o)
    {
        int cmp = 0;
        if (this.getId() != null)
        {
            cmp = this.getId().compareTo(o.getId());
        }
        else
        {
            if (this.getItemName() != null)
            {
                cmp = (cmp != 0 ? cmp : this.getItemName().compareTo(o.getItemName()));
            }
            if (this.getMarketType() != null)
            {
                cmp = (cmp != 0 ? cmp : this.getMarketType().compareTo(o.getMarketType()));
            }
            if (this.getApproveStatus() != null)
            {
                cmp = (cmp != 0 ? cmp : this.getApproveStatus().compareTo(o.getApproveStatus()));
            }
            if (this.getDateCreate() != null)
            {
                cmp = (cmp != 0 ? cmp : this.getDateCreate().compareTo(o.getDateCreate()));
            }
            if (this.getDateEdit() != null)
            {
                cmp = (cmp != 0 ? cmp : this.getDateEdit().compareTo(o.getDateEdit()));
            }
            if (this.getIsArchived() != null)
            {
                cmp = (cmp != 0 ? cmp : this.getIsArchived().compareTo(o.getIsArchived()));
            }
        }
        return cmp;
    }
// HibernateEntity.vsl merge-point
}