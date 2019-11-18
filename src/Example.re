[@decco]
type status =
  | Active
  | Inactive(float);

[@decco]
type user = {
  name: string,
  status,
};
