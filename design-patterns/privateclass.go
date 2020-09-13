package main

import (
	"encoding/json"
	"fmt"
)

//AccountDetails struct
type AccountDetails struct {
	id          string
	accountType string
}

//Account struct
type Account struct {
	details      *AccountDetails
	CustomerName string
}

// Account class method setDetails
func (account *Account) setDetails(id string, accountType string) {
	account.details = &AccountDetails{id, accountType}
}

//Account class method getId
func (account *Account) getId() string {
	return account.details.id
}

// Account class method getAccounType
func (account *Account) getAccountType() string {
	return account.details.accountType
}
func main() {
	var account *Account = &Account{CustomerName: "Neil Smith"}
	account.setDetails("4532", "current")
	jsonAccount, _ := json.Marshal(account)
	fmt.Println("Private class hidden", string(jsonAccount))
	fmt.Println("Account Id", account.getId())
	fmt.Println("Account Type", account.getAccountType())
}
