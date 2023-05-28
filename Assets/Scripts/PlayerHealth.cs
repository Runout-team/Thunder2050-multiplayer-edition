using UnityEngine;

public class PlayerHealth : MonoBehaviour
{
    public int maxHealth = 100;
    public int currentHealth;

    private void Start()
    {
        currentHealth = maxHealth;
    }

    public void TakeDamage(int damageAmount)
    {
        currentHealth -= damageAmount;

        if (currentHealth <= 0)
        {
            Die();
        }
    }

    private void Die()
    {
        // Game over logic or player death animation goes here
        Debug.Log("Player died");
        // For example, you can disable the player's movement or show a game over screen
        // gameObject.SetActive(false);
    }
}
