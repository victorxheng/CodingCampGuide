package objectOrientedProgramming;

import java.util.Random;

public class Player {
    private int health;
    private Card[] cardList = new Card[5];

    public Player(int health) {
        this.health = health;
        generateCards();
    }

    private void generateCards(){
        for(int i = 0; i < cardList.length; i++){
            cardList[i] = generateCard();
            //System.out.println("Health = " + cardList[i].getHealth() + ", Damage = "+ cardList[i].getDamage());
        }
    }

    private Card generateCard(){
        Random r = new Random();
        return new Card(r.nextInt(20), r.nextInt(40));
    }

    public void useCard(int index, Player opponent){
        Card c = cardList[index-1];
        Random r = new Random();
        if(r.nextDouble() < 0.6){
            //apply health
            System.out.println("Healing successful!");
            health += c.getHealth();
        }
        else{
            System.out.println("Healing failed!");
        }
        if(r.nextDouble() < 0.6){
            //apply damage
            System.out.println("Attack successful!");
            opponent.doDamage(c.getDamage());
        }
        else{
            System.out.println("Attack missed!");
        }
        cardList[index-1] = generateCard();
    }

    public void printCards(){
        for(int i = 0; i < cardList.length; i++){
            System.out.println((i+1) + ". Damage: " + cardList[i].getDamage()
                    + ", Health: " + cardList[i].getHealth());
        }
    }

    public void doDamage(int damage){
        health -= damage;
    }

    public int getHealth() {
        return health;
    }

    public void setHealth(int health) {
        this.health = health;
    }

    public Card[] getCardList() {
        return cardList;
    }

    public void setCardList(Card[] cardList) {
        this.cardList = cardList;
    }
}
